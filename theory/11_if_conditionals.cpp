/*
En C++, la instrucción 'if' permite ejecutar un bloque de código solo si se cumple una condición específica.

Sintaxis básica:
if (condición) {
    // Código a ejecutar si la condición es verdadera
}

*/
#include <iostream>
using namespace std;

// Verificar si un número es positivo
int main() {
    int numero;
    cout << "Introduce un número: ";
    cin >> numero;

    // Condicional simple
    if (numero > 0) {
        cout << "El número es positivo." << endl;
    }

    /*
    Explicación:
    - La condición (numero > 0) se evalúa.
    - Si es verdadera, se ejecuta el bloque dentro del 'if'.
    - Si es falsa, el bloque se omite.
    */

    // Condicional con 'else'
    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else {
        cout << "El número NO es positivo." << endl;
    }

    /*
    Explicación:
    - Si la condición del 'if' es falsa, se ejecuta el bloque del 'else'.
    */

    // Condicional con 'else if'
    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero == 0) {
        cout << "El número es cero." << endl;
    } else {
        cout << "El número es negativo." << endl;
    }

    /*
    Explicación:
    - Se evalúa la primera condición (numero > 0).
    - Si es falsa, se evalúa la siguiente (numero == 0).
    - Si ambas son falsas, se ejecuta el bloque del 'else'.
    */

    return 0;
}

/*
Resumen:
- 'if' permite tomar decisiones en el flujo del programa.
- Se pueden encadenar múltiples condiciones usando 'else if'.
- 'else' cubre el caso en que ninguna condición anterior se cumple.
*/