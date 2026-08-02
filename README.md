# Drone Swarm AI Controller

Questo progetto implementa il controllo intelligente per uno sciame di 4 droni sottomarini simulati in **OpenModelica**, utilizzando una **Rete Neurale Artificiale** (Neural Network) addestrata con un algoritmo di **Evolutionary Strategy** (ES) implementato nativamente in C.

## 1. Architettura del Sistema
Il progetto si basa su due componenti principali:
- **La Pianta (OpenModelica)**: Il file `DroneSwarm.mo` modella la dinamica fisica (attrito dell'acqua, masse) e il consumo della batteria dei 4 droni sottomarini. (Nella fase di training questo modello viene esportato e usato come FMU).
- **L'Intelligenza Artificiale (Codice C)**: Il programma `main.c` simula migliaia di scenari (tramite l'FMU) e addestra una Rete Neurale a capire quali sono i movimenti migliori per far sopravvivere lo sciame e fargli ispezionare l'area di interesse.

---

## 2. La Rete Neurale (Neural Network)
La mente di ogni drone è rappresentata da una Rete Neurale (Multi-Layer Perceptron) definita in `neuralNetwork.h`.
Tutti i 4 droni condividono la stessa rete neurale (hanno lo stesso "cervello" condiviso), ma agiscono in modo indipendente l'uno dall'altro grazie alla **Rottura della Simmetria**.

La rete neurale ha la seguente struttura (**103 parametri totali da ottimizzare**):
* **Input Layer (6 nodi)**:
  1. `pos_x`, `pos_y`, `pos_z`: Posizione fisica del drone.
  2. `battery`: Livello di batteria (0-100%).
  3. `min_dist`: Distanza dal drone più vicino (usato come sensore anti-collisione).
  4. `drone_id`: L'identificativo unico del drone (es. 0.0, 0.33, 0.66, 1.0). **Questo input è fondamentale: permette a droni con lo stesso identico cervello di prendere direzioni opposte anziché sovrapporsi, "rompendo" la simmetria iniziale.**
* **Hidden Layer (10 nodi)**: Elabora gli input e ne estrae la logica.
* **Output Layer (3 nodi)**: Restituisce le spinte desiderate da dare ai motori lungo gli assi X, Y e Z.

---

## 3. L'Addestramento: Evolutionary Strategy (ES)
L'algoritmo di addestramento non usa la classica *Backpropagation* (perché non abbiamo un dataset umano corretto da imitare). Usa invece una **Evolutionary Strategy (Strategia Evolutiva)**, un potente metodo basato sull'ottimizzazione tramite rumore casuale:

1. **Il Cervello Padre (`theta`)**: Si parte da un set di pesi iniziali per la Rete Neurale, generati casualmente.
2. **Generazione dei Figli (Candidati)**: In ogni *Epoca*, si creano molti "cloni" del padre (es. 20 candidati). A ogni clone viene aggiunta una mutazione casuale (chiamata `epsilon`).
3. **Simulazione e Valutazione (Fitness)**: Ogni candidato viene testato in una simulazione reale interfacciandosi con la fisica di OpenModelica. Alla fine della simulazione (es. 60 secondi), il candidato riceve un "Costo Totale" (Penalità).
4. **Funzione di Costo**: È il cuore del sistema. Un costo alto significa un drone stupido. Il costo aumenta se:
   - I droni escono dalla "Zona di Pattugliamento" `[-20, 20] x [-20, 20] x [-10, -2]`.
   - I droni si scontrano (penalità massiccia se la `min_dist` < 1.0 metro).
   - I droni si allontanano troppo l'uno dall'altro.
   - I droni si scaricano e non tornano alla base di ricarica `(0,0,0)` prima di spegnersi.
5. **Aggiornamento Evolutivo**: I cloni che si sono mossi meglio (costo più basso) trascinano il padre. I pesi del *Cervello Padre* vengono spinti e sovrascritti nella direzione delle mutazioni vincenti dei cloni migliori.
6. Il processo si ripete, abbassando progressivamente il costo e rendendo lo sciame sempre più intelligente.

*Nota tecnica: per evitare di rimanere bloccati in scenari sub-ottimali (Ottimi Locali), l'addestramento è configurato per eseguire 5 **Restart** da capo (azzerando i pesi padre), memorizzando poi il campione migliore in assoluto tra tutte le esecuzioni.*

---

## 4. Simulazione Autonoma in OpenModelica
Una volta concluso l'addestramento, l'eseguibile C esporta i 103 pesi vincenti nel file `src/best_weights.h`.

Quando l'utente avvia l'animazione 3D nativamente dall'editor grafico di OpenModelica (OMEdit):
1. Il codice Modelica carica il file C `src/ai_controller.c` (la Funzione Esterna C).
2. Durante la simulazione, OMEdit interroga in tempo reale la Rete Neurale in C (iniettata con i `best_weights`).
3. I droni prendono vita e comunicano con il file C in totale autonomia in un ecosistema in cui Modelica gestisce la fisica e le collisioni, mentre la Rete Neurale ne gestisce le intelligenze e le manovre, il tutto visualizzato nell'ambiente grafico animato 3D.
