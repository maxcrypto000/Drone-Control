import xml.etree.ElementTree as ET
import sys

def main():
    try:
        tree = ET.parse('modelDescription.xml')
    except Exception as e:
        print(f"Errore lettura modelDescription.xml: {e}")
        sys.exit(1)
        
    root = tree.getroot()
    vars = root.find('ModelVariables').findall('ScalarVariable')
    
    vr_map = {}
    for v in vars:
        name = v.attrib['name']
        vr = v.attrib['valueReference']
        vr_map[name] = vr

    # Cerchiamo pos_x_1, pos_y_1, ecc. se non ci sono falliamo
    try:
        x = [vr_map[f'pos_x_{i}'] for i in range(1, 5)]
        y = [vr_map[f'pos_y_{i}'] for i in range(1, 5)]
        z = [vr_map[f'pos_z_{i}'] for i in range(1, 5)]
    except KeyError:
        print("Errore: Impossibile trovare le variabili pos_x_1...4 nel file XML.")
        print("Assicurati di aver riesportato l'FMU dopo le modifiche a DroneSwarm.mo!")
        sys.exit(1)

    with open('src/vrs.h', 'w') as f:
        f.write("#ifndef VRS_H\n#define VRS_H\n\n")
        f.write("#include \"fmi4c.h\"\n\n")
        f.write(f"fmi2ValueReference vr_pos_x[4] = {{{', '.join(x)}}};\n")
        f.write(f"fmi2ValueReference vr_pos_y[4] = {{{', '.join(y)}}};\n")
        f.write(f"fmi2ValueReference vr_pos_z[4] = {{{', '.join(z)}}};\n")
        f.write("\n#endif\n")
    print("vrs.h generato con successo.")

if __name__ == "__main__":
    main()
