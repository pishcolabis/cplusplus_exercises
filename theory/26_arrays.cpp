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
        void imprimir(int arr[], int size) {
            for(int i = 0; i < size; ++i)
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
#include <string>
#include <algorithm>

int buscarElemento(int arr[], int size, int valor);

std::string buscarElemento(std::string arr[], int size, std::string valor);

void bubbleSort(int arr[], int size);

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
    auto imprimir = [](int arr[], int size) {
        std::cout << "Array recibido en función: ";
        for(int i = 0; i < size; ++i)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    };
    imprimir(numeros, 5);

    // Buscar un elemento en el array de enteros
    int valorABuscar = 35;
    buscarElemento(numeros, 5, valorABuscar);

    // Buscar un elemento en un array de strings
    std::string palabras[3] = {"hola", "mundo", "C++"};
    std::string palabraABuscar = "mundo";
    buscarElemento(palabras, 3, palabraABuscar);

    // Ordenar el array de enteros por algoritmo de burbuja (Bubble Sort)
    int numerosAOrdenar[] = {10,9,6,7,5,8,4,3,2,1};
    int size = sizeof(numerosAOrdenar) / sizeof(int);

    bubbleSort(numerosAOrdenar, size);

    std::cout << "\nArray ordenado:\n";
    for(int i = 0; i < size; ++i) {
        std::cout << numerosAOrdenar[i] << " ";
    }
    std::cout << std::endl;

    // Otra forma de ordenar el array es usando la función std::sort
    // de la biblioteca <algorithm>, que implementa un algoritmo eficiente.
    // std::sort utiliza un algoritmo de ordenamiento rápido (Quick Sort) o similar,
    // que es mucho más eficiente que el Bubble Sort para grandes conjuntos de datos.
    // std::sort requiere incluir la cabecera <algorithm>.
    // Esta función ordena el array en su lugar, es decir, modifica el array original
    // y no devuelve un nuevo array ordenado.
    // El primer argumento es el inicio del array y el segundo es el final.
    // En este caso, el final es el puntero al elemento siguiente al último.
    // std::sort también permite ordenar arrays de otros tipos, como strings o estructuras,
    // siempre que se defina un criterio de comparación adecuado.
    // Aquí se ordena el mismo array de enteros usando std::sort.
    // Se usa el tamaño del array previamente calculado.

    int numerosAOrdenar2[] = {10, 9, 6, 7, 5, 8, 4, 3, 2, 1};
    std::sort(numerosAOrdenar2, numerosAOrdenar2 + size);
    std::cout << "\nArray ordenado con std::sort:\n";
    for(int i = 0; i < size; ++i) {
        std::cout << numerosAOrdenar2[i] << " ";
    }
    std::cout << std::endl;
    return 0;

    // Uso de la función fill
    const int COMIDA_SIZE = 100;
    std::string comida[COMIDA_SIZE];
    // Llenar todo el array con "Pizza"
    // fill(comida, comida + COMIDA_SIZE, "Pizza");
    // Equivale a: comida[0] hasta comida[99] = "Pizza"
    fill(comida, comida + COMIDA_SIZE, "Pizza");

    // Rellenar mitad y mitad del array con diferentes valores
    std::string comida2[COMIDA_SIZE];
    // Llenar la primera mitad con "Hamburguesa"
    // fill(comida2, comida2 + COMIDA_SIZE / 2, "Hamburguesa");
    // Equivale a: comida2[0] hasta comida2[49] = "Hamburguesa"
    fill(comida2, comida2 + COMIDA_SIZE / 2, "Hamburguesa");
    // Llenar la segunda mitad con "Pizza"
    // fill(comida2 + COMIDA_SIZE / 2, comida2 + COMIDA_SIZE, "Pizza");
    // Equivale a: comida2[50] hasta comida2[99] = "Pizza"
    fill(comida2 + COMIDA_SIZE / 2, comida2 + COMIDA_SIZE, "Pizza");

    // El único problema con el tamaño de los arrays es que al no ser múltiples de 3,
    // el último tercio puede no estar completamente lleno.
    // Por ejemplo, si COMIDA_SIZE es 100, los tercios serán 33, 33 y 34.
    // El primer tercio tendrá 33 elementos, el segundo tercio tendrá 33 elementos,
    // y el último tercio tendrá 34 elementos.
    // Esto es importante tenerlo en cuenta al usar la función fill.
    
    // Rellenar por tercios
    std::string comida3[COMIDA_SIZE];
    // Primer tercio con "Hamburguesa"
    // fill(comida3, comida3 + COMIDA_SIZE / 3, "Hamburguesa");
    // Equivale a: comida3[0] hasta comida3[32] = "Hamburguesa"
    fill(comida3, comida3 + COMIDA_SIZE / 3, "Hamburguesa");

    // Segundo tercio con "Pizza"
    // fill(comida3 + COMIDA_SIZE / 3, comida3 + 2 * COMIDA_SIZE / 3, "Pizza");
    // Equivale a: comida3[33] hasta comida3[65] = "Pizza"
    fill(comida3 + COMIDA_SIZE / 3, comida3 + 2 * COMIDA_SIZE / 3, "Pizza");

    // Último tercio con "Sushi"
    // fill(comida3 + 2 * COMIDA_SIZE / 3, comida3 + COMIDA_SIZE, "Sushi");
    // Equivale a: comida3[66] hasta comida3[99] = "Sushi"
    fill(comida3 + 2 * COMIDA_SIZE / 3, comida3 + COMIDA_SIZE, "Sushi");
}

/*
    Resumen:
    - Los arrays son útiles para almacenar colecciones de datos homogéneos.
    - Son de tamaño fijo y su manejo requiere cuidado con los límites de índice.
    - Para colecciones dinámicas, se recomienda usar std::vector.
    - Los arrays son la base para estructuras más complejas como matrices y buffers.
*/

int buscarElemento(int arr[], int size, int valor) {
    for(int i = 0; i < size; ++i) {
        if(arr[i] == valor) {
            std::cout << "Elemento " << valor << " encontrado en el índice " << i << std::endl;
            return i;
        }
    }
    std::cout << "Elemento " << valor << " no encontrado." << std::endl;
    return -1;
}

std::string buscarElemento(std::string arr[], int size, std::string valor) {
    for(int i = 0; i < size; ++i) {
        if(arr[i] == valor) {
            std::cout << "Elemento '" << valor << "' encontrado en el índice " << i << std::endl;
            return arr[i];
        }
    }
    std::cout << "Elemento '" << valor << "' no encontrado." << std::endl;
    return "";
}

// Algoritmo de ordenamiento Burbuja (Bubble Sort)
// Recorre el array varias veces, comparando elementos siguientes y
// los intercambia si están en el orden incorrecto.
// Después de cada pasada, el elemento más grande se coloca al final.
void bubbleSort(int arr[], int size) {
    // Número de pasadas es igual al tamaño del array menos uno.
    for(int i = 0; i < size - 1; ++i) {
        // Comparaciones en cada pasada.
        // Se reduce el número de comparaciones en cada iteración,
        // ya que los últimos elementos ya están ordenados.
        // En este caso, el número de comparaciones es size - i - 1.
        // Esto evita comparar elementos ya ordenados.
        // Y además, evita overflow en el índice.
        for(int j = 0; j < size - i - 1; ++j) {
            // Si el elemento actual es mayor que el siguiente, se intercambian
            if(arr[j] > arr[j + 1]) {
                // Intercambiar valores usando una variable temporal
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}