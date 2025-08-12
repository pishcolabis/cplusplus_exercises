#include <iostream>
using namespace std;

int main() {
    // Ejemplo de uso de 'break' en un bucle for
    cout << "Ejemplo de break:\n";
    for (int i = 1; i <= 5; i++) {
        // Si el valor de i es igual a 3, se ejecuta el siguiente bloque
        if (i == 3) {
            cout << "Se encontró el 3, se sale del bucle.\n";
            break; // Sale inmediatamente del bucle for, no se ejecutan más iteraciones
        }
        // Se imprime el valor actual de i si no se ha ejecutado el break
        cout << "i = " << i << endl;
    }

    // Ejemplo de uso de 'continue' en un bucle for
    cout << "\nEjemplo de continue:\n";
    for (int i = 1; i <= 5; i++) {
        // Si el valor de i es igual a 3, se ejecuta el siguiente bloque
        if (i == 3) {
            cout << "Se encontró el 3, se salta esta iteración.\n";
            continue; // Salta el resto del código en esta iteración y pasa a la siguiente
        }
        // Se imprime el valor actual de i si no se ha ejecutado el continue
        cout << "i = " << i << endl;
    }

    return 0;
}