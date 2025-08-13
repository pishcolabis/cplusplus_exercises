#include <iostream>

/**
 * @brief El operador sizeof en C++ se utiliza para obtener el tamaño en bytes de un tipo de dato o de una variable.
 *
 * Ejemplo práctico usando una matriz bidimensional para dibujar una 'X' en consola.
 * Se utiliza sizeof para calcular el número de filas y columnas de la matriz.
 */
int main() {
    const int ROWS = 9;
    const int COLS = 9;
    char matriz[ROWS][COLS];

    // Inicializar la matriz con espacios
    // Donde sizeof(matriz) / sizeof(matriz[0]) nos da el número de filas
    // y sizeof(matriz[0]) / sizeof(matriz[0][0]) nos da el número de columnas.
    // El valor de sizeof(matriz) es el tamaño total de la matriz en bytes,
    // mientras que sizeof(matriz[0]) es el tamaño de una fila completa.
    // Por lo tanto, sizeof(matriz[0][0]) es el tamaño de un solo elemento.

    std::cout << "Tamaño de la matriz: " << sizeof(matriz) << " bytes\n";
    std::cout << "Donde sizeof(matriz) es " << sizeof(matriz) << " y sizeof(matriz[0]) es " << sizeof(matriz[0]) << "\n";
    std::cout << "Número de filas: " << sizeof(matriz) / sizeof(matriz[0]) << "\n";
    std::cout << "Donde sizeof(matriz[0]) es " << sizeof(matriz[0]) << " y sizeof(matriz[0][0]) es " << sizeof(matriz[0][0]) << "\n";
    std::cout << "Número de columnas: " << sizeof(matriz[0]) / sizeof(matriz[0][0]) << "\n\n";

    for (size_t i = 0; i < sizeof(matriz) / sizeof(matriz[0]); ++i) {
        for (size_t j = 0; j < sizeof(matriz[0]) / sizeof(matriz[0][0]); ++j) {
            matriz[i][j] = ' ';
        }
    }

    // Dibujar la X
    for (size_t i = 0; i < sizeof(matriz) / sizeof(matriz[0]); ++i) {
        matriz[i][i] = 'X';
        matriz[i][(sizeof(matriz[0]) / sizeof(matriz[0][0])) - i - 1] = 'X';
    }

    // Mostrar la matriz
    for (size_t i = 0; i < sizeof(matriz) / sizeof(matriz[0]); ++i) {
        for (size_t j = 0; j < sizeof(matriz[0]) / sizeof(matriz[0][0]); ++j) {
            std::cout << matriz[i][j];
        }
        std::cout << std::endl;
    }

    // Ejemplos de uso de sizeof con tipos primitivos y string
    // El tamaño de los tipos primitivos y std::string siempre va a ser el mismo,
    // independientemente de la plataforma, ya que son definidos por el estándar de C++.
    // Ya que el tamaño se mide a nivel referencia, no a nivel de instancia.
    int entero = 42;
    double decimal = 3.1416;
    char caracter = 'A';
    std::string texto = "Hola";

    std::cout << "\nsizeof(int): " << sizeof(int) << " bytes\n";
    std::cout << "sizeof(entero): " << sizeof(entero) << " bytes\n";
    std::cout << "sizeof(double): " << sizeof(double) << " bytes\n";
    std::cout << "sizeof(decimal): " << sizeof(decimal) << " bytes\n";
    std::cout << "sizeof(char): " << sizeof(char) << " bytes\n";
    std::cout << "sizeof(caracter): " << sizeof(caracter) << " bytes\n";
    std::cout << "sizeof(std::string): " << sizeof(std::string) << " bytes\n";
    std::cout << "sizeof(texto): " << sizeof(texto) << " bytes\n";

    return 0;
}