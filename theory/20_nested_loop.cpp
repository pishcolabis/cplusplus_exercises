#include <iostream>

int main() {
    int n;
    // Solicita al usuario el número de filas para el patrón
    std::cout << "Introduce el número de filas: ";
    std::cin >> n;

    // Primer bucle: recorre cada fila desde 1 hasta n
    for (int i = 1; i <= n; ++i) {
        // Segundo bucle: imprime asteriscos en cada fila, igual al número de la fila actual
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        // Salto de línea al final de cada fila para formar el patrón triangular
        std::cout << std::endl;
    }

    // Este programa imprime un patrón de asteriscos en forma de triángulo.
    // Por ejemplo, si el usuario introduce 5, la salida será:
    /*  
        Resultado esperado:
        Si el usuario introduce 5, la salida será:
        *
        **
        ***
        ****
        *****
    */
    return 0;
}