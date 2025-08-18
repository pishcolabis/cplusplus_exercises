// La memoria dinámica es una parte fundamental de la programación en C++.
// Permite a los programas solicitar y liberar memoria en tiempo de ejecución,
// lo que es especialmente útil para estructuras de datos que cambian de tamaño
// o para objetos que necesitan persistir más allá del alcance de una función.

// Para asignar memoria dinámica, usamos el operador new.
// Este operador reserva un bloque de memoria del tamaño especificado y devuelve un puntero
// a la primera dirección de memoria del bloque asignado.
// Es importante recordar que, una vez que hemos terminado de usar la memoria asignada,
// debemos liberar esa memoria usando el operador delete para evitar fugas de memoria.

#include <iostream>

int main() {
    // Asignación de memoria dinámica para un entero
    // Aquí estamos reservando memoria para un solo entero.
    // El operador new devuelve un puntero a la memoria asignada.
    int *ptr = new int;

    // Verificación de la asignación
    if (ptr == nullptr) {
        std::cerr << "Error al asignar memoria." << std::endl;
        return 1;
    }

    // Uso de la memoria asignada
    *ptr = 42;
    std::cout << "Dirección: " << ptr << std::endl;
    std::cout << "Valor: " << *ptr << std::endl;

    // Liberación de la memoria
    // Es de buena práctica liberar la memoria una vez que ya no la necesitamos.
    delete ptr;

    char *pCalifications = nullptr; // Inicializamos un puntero nulo
    std::cout << "Ingrese el número de notas: ";
    int size;
    std::cin >> size;
    pCalifications = new char[size];

    // Verificación de la asignación
    if (pCalifications == nullptr) {
        std::cerr << "Error al asignar memoria." << std::endl;
        return 1;
    }


    for (int i = 0; i < size; ++i) {
        std::cout << "Ingrese la nota " << i + 1 << ": ";
        std::cin >> pCalifications[i];
    }

    // Imprimimos las notas ingresadas
    std::cout << "Notas ingresadas: ";
    for (int i = 0; i < size; ++i) {
        std::cout << pCalifications[i] << " ";
    }
    // Liberación de la memoria
    delete[] pCalifications;

    std::cout << std::endl;
    return 0;
}