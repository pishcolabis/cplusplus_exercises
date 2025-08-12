#include <iostream>

// Ejercicio demostrativo del uso del operador ternario en C++
// El operador ternario tiene la forma: condición ? valor_si_verdadero : valor_si_falso;
// Es una forma compacta de escribir una estructura if-else simple.

// Este programa pide al usuario dos números y muestra cuál es el mayor usando el operador ternario.

using namespace std;

int main() {
    int a, b;

    cout << "Ingrese el primer número: ";
    cin >> a;

    cout << "Ingrese el segundo número: ";
    cin >> b;

    // Usando el operador ternario para determinar el mayor
    // Si a > b, se selecciona a; de lo contrario, se selecciona b.
    int mayor = (a > b) ? a : b;

    // También podemos usar el operador ternario para imprimir directamente
    cout << "El mayor es: " << mayor << endl;

    // Ejemplo adicional: determinar si un número es par o impar usando el operador ternario
    cout << "¿El número " << mayor << " es par o impar? ";
    cout << ((mayor % 2 == 0) ? "Par" : "Impar") << endl;

    // Nota: El operador ternario es útil para expresiones simples, pero para lógica más compleja,
    // es mejor usar if-else tradicional para mayor claridad.

    return 0;
}