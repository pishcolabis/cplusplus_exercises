/*
Recursividad en C++

La recursividad es una técnica de programación en la que una función se llama a sí misma para resolver un problema dividiéndolo en subproblemas más pequeños. En C++, la recursividad se utiliza comúnmente para tareas como el cálculo de factoriales, la búsqueda en estructuras de datos, y la resolución de problemas matemáticos.

Ejemplo simple de recursividad: cálculo del factorial

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

Ventajas de la recursividad:
- Permite escribir código más claro, limpio y elegante para problemas que tienen una estructura naturalmente recursiva (como árboles o algoritmos de búsqueda).
- Facilita la solución de problemas complejos dividiéndolos en subproblemas más simples.
- Es especialmente útil para algoritmos de ordenamiento y búsqueda, como quicksort, mergesort y búsqueda en árboles.

Desventajas de la recursividad:
- Puede consumir más memoria debido al uso de la pila de llamadas, lo que puede llevar a desbordamientos de pila si la recursión es muy profunda.
- En algunos casos, la recursividad puede ser menos eficiente que las soluciones iterativas debido al coste de las llamadas a funciones.
- Puede ser más difícil de depurar y entender para problemas donde la recursividad no es natural.

En resumen, la recursividad es una herramienta poderosa en C++, pero debe usarse con cuidado, considerando tanto sus ventajas como sus posibles inconvenientes.
*/

#include <iostream>

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numero;
    std::cout << "Introduce un número para calcular su factorial: ";
    std::cin >> numero;
    std::cout << "El factorial de " << numero << " es " << factorial(numero) << std::endl;
    return 0;
}