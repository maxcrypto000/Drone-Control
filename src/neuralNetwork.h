#include <math.h>
#include <stdlib.h>

// Definiamo la topologia della rete
#define INPUT_SIZE 9    // pos_x, pos_y, pos_z, batteria, dist_vicino, ID_drone, delta_x, delta_y, delta_z
#define HIDDEN_SIZE 10  // Numero di neuroni nello strato intermedio
#define OUTPUT_SIZE 3   // Spinta sui tre assi (ux, uy, uz)

// 1. La Struttura della Rete Neurale (Il "Genoma" di un drone)
typedef struct {
    // Pesi e Bias per connettere Input -> Hidden Layer
    double W1[HIDDEN_SIZE][INPUT_SIZE];
    double b1[HIDDEN_SIZE];
    
    // Pesi e Bias per connettere Hidden Layer -> Output Layer
    double W2[OUTPUT_SIZE][HIDDEN_SIZE];
    double b2[OUTPUT_SIZE];
    
    // Variabile critica per l'Evolutionary Strategy:
    // Memorizza il risultato della nostra funzione getCost() per valutare 
    // l'efficienza di questa specifica rete e cercare la soluzione a costo minimo.
    double fitness_cost; 
} NeuralNetwork;

// 2. Funzione di Attivazione
// Utilizziamo tanh() per schiacciare l'output di ogni neurone nel range [-1.0, 1.0].
// È ideale per i comandi di propulsione (retromarcia/avanti).
double activation(double x) {
    return tanh(x);
}

// 3. Il Forward Pass (Il cervello in azione)
// Prende i sensori (inputs) e calcola le azioni dei motori (outputs)
void forward_pass(NeuralNetwork* nn, double inputs[INPUT_SIZE], double outputs[OUTPUT_SIZE]) {
    double hidden[HIDDEN_SIZE];

    // --- A. Calcolo del Livello Nascosto (Hidden Layer) ---
    for (int i = 0; i < HIDDEN_SIZE; i++) {
        hidden[i] = nn->b1[i]; // Inizializza con il bias
        
        // Prodotto scalare: W1 * input
        for (int j = 0; j < INPUT_SIZE; j++) {
            hidden[i] += nn->W1[i][j] * inputs[j];
        }
        
        // Applica l'attivazione non lineare
        hidden[i] = activation(hidden[i]);
    }

    // --- B. Calcolo del Livello di Uscita (Output Layer) ---
    for (int i = 0; i < OUTPUT_SIZE; i++) {
        outputs[i] = nn->b2[i]; // Inizializza con il bias
        
        // Prodotto scalare: W2 * hidden
        for (int j = 0; j < HIDDEN_SIZE; j++) {
            outputs[i] += nn->W2[i][j] * hidden[j];
        }
        
        // Attivazione finale (comandi tra -1.0 e 1.0)
        outputs[i] = activation(outputs[i]); 
    }
}

#define PARAM_COUNT 133 // Somma totale di pesi e bias (90 + 10 + 30 + 3)

// Generatore di rumore gaussiano N(0, 1) tramite trasformata di Box-Muller
double random_normal() {
    double u1 = ((double)rand() / RAND_MAX);
    double u2 = ((double)rand() / RAND_MAX);
    if (u1 <= 1e-7) u1 = 1e-7; 
    return sqrt(-2.0 * log(u1)) * cos(2.0 * 3.14159265358979323846 * u2);
}

// Inizializza i pesi e i bias della rete con valori casuali
void initRandomNetwork(NeuralNetwork* nn) {
    for (int i = 0; i < HIDDEN_SIZE; i++) {
        for (int j = 0; j < INPUT_SIZE; j++) nn->W1[i][j] = random_normal();
        nn->b1[i] = random_normal();
    }
    for (int i = 0; i < OUTPUT_SIZE; i++) {
        for (int j = 0; j < HIDDEN_SIZE; j++) nn->W2[i][j] = random_normal();
        nn->b2[i] = random_normal();
    }
    nn->fitness_cost = 0.0;
}

// Estrae tutti i pesi della rete in un singolo array piatto (theta)
void get_parameters(NeuralNetwork* nn, double* theta) {
    int idx = 0;
    // Layer 1
    for (int i = 0; i < HIDDEN_SIZE; i++) {
        for (int j = 0; j < INPUT_SIZE; j++) theta[idx++] = nn->W1[i][j];
        theta[idx++] = nn->b1[i];
    }
    // Layer 2
    for (int i = 0; i < OUTPUT_SIZE; i++) {
        for (int j = 0; j < HIDDEN_SIZE; j++) theta[idx++] = nn->W2[i][j];
        theta[idx++] = nn->b2[i];
    }
}

// Reinserisce l'array piatto (theta) aggiornato dentro la struttura della rete
void set_parameters(NeuralNetwork* nn, double* theta) {
    int idx = 0;
    // Layer 1
    for (int i = 0; i < HIDDEN_SIZE; i++) {
        for (int j = 0; j < INPUT_SIZE; j++) nn->W1[i][j] = theta[idx++];
        nn->b1[i] = theta[idx++];
    }
    // Layer 2
    for (int i = 0; i < OUTPUT_SIZE; i++) {
        for (int j = 0; j < HIDDEN_SIZE; j++) nn->W2[i][j] = theta[idx++];
        nn->b2[i] = theta[idx++];
    }
}