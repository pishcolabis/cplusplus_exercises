/*
    Arrays en C++

    Un array (arreglo) es una estructura de datos que almacena una colección de elementos del mismo tipo en ubicaciones de memoria contiguas.
    Los arrays permiten acceder a sus elementos mediante índices, comenzando desde 0.

    Sintaxis básica:
    tipo nombre_array[tamaño];

    Ejemplo:
    int numeros[5]; // Array de 5 enteros

    Características principales:
    - El tamaño debe ser una constante conocida en tiempo de compilación (para arrays estáticos).
    - Los elementos se almacenan en memoria contigua.
    - El índice del primer elemento es 0, el último es tamaño-1.
    - Los arrays pueden ser de cualquier tipo de dato: int, double, char, structs, etc.
    - No se puede cambiar el tamaño de un array estático después de su declaración.
    - Los arrays pueden ser multidimensionales (matrices).

    Inicialización:
    - Se puede inicializar al declarar:
        int a[3] = {1, 2, 3};
    - Si se inicializa parcialmente, los elementos restantes se inicializan a 0 (para tipos numéricos):
        int b[5] = {1, 2}; // b[2], b[3], b[4] serán 0
    - Si no se inicializa, los valores serán indeterminados (basura).

    Acceso a elementos:
    - Se accede usando el operador []:
        a[0] = 10; // Asigna 10 al primer elemento
        int x = a[2]; // Obtiene el tercer elemento

    Arrays multidimensionales:
    - Ejemplo de array bidimensional (matriz):
        int matriz[2][3] = {{1,2,3},{4,5,6}};
    - Acceso: matriz[fila][columna]

    Arrays y funciones:
    - Se pueden pasar arrays a funciones, pero realmente se pasa un puntero al primer elemento.
    - Ejemplo:
        void imprimir(int arr[], int tamaño) {
            for(int i = 0; i < tamaño; ++i)
                std::cout << arr[i] << " ";
        }

    Limitaciones:
    - No se puede obtener el tamaño de un array con sizeof(arr) dentro de una función (solo funciona en el ámbito donde se declara).
    - Para arrays dinámicos, se recomienda usar std::vector.

    Arrays y punteros:
    - El nombre del array es un puntero al primer elemento.
    - Se puede acceder usando aritmética de punteros:
        *(a + 1) == a[1]

    Ejemplo completo:
*/

#include <iostream>

int buscarElemento(int arr[], int tamaño, int valor);

int main() {
    // Declaración e inicialización
    int numeros[5] = {10, 20, 30, 40, 50};

    // Acceso y modificación
    numeros[2] = 35; // Cambia el tercer elemento

    // Recorrido del array
    std::cout << "Elementos del array:\n";
    for(int i = 0; i < 5; ++i) {
        std::cout << "numeros[" << i << "] = " << numeros[i] << std::endl;
    }

    // Array bidimensional (matriz)
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::cout << "\nElementos de la matriz:\n";
    for(int fila = 0; fila < 2; ++fila) {
        for(int col = 0; col < 3; ++col) {
            std::cout << "matriz[" << fila << "][" << col << "] = " << matriz[fila][col] << " ";
        }
        std::cout << std::endl;
    }

    // Uso de punteros con arrays
    // Para más información sobre punteros, consulta el fichero pointers_references.
    int *ptr = numeros;
    std::cout << "\nAcceso usando punteros:\n";
    for(int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    // Pasar array a función
    // La palabra reservada 'auto' permite deducir el tipo de la función automáticamente.
    // Para saber más sobre las funciones lambda, consulta el fichero functions_lambda.cpp.
    auto imprimir = [](int arr[], int tamaño) {
        std::cout << "Array recibido en función: ";
        for(int i = 0; i < tamaño; ++i)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    };
    imprimir(numeros, 5);

    return 0;
}

/*
    Resumen:
    - Los arrays son útiles para almacenar colecciones de datos homogéneos.
    - Son de tamaño fijo y su manejo requiere cuidado con los límites de índice.
    - Para colecciones dinámicas, se recomienda usar std::vector.
    - Los arrays son la base para estructuras más complejas como matrices y buffers.
*/

int buscarElemento(int arr[], int tamaño, int valor) {
    for(int i = 0; i < tamaño; ++i) {
        if(arr[i] == valor) {
            std::cout << "Elemento " << valor << " encontrado en el índice " << i << std::endl;
            return i;
        }
    }
    std::cout << "Elemento " << valor << " no encontrado." << std::endl;
    return -1;
}