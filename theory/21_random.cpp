/*
    Ejemplo teórico y práctico: Generación de números aleatorios en C++ moderno

    Buenas prácticas:
    - Usar <random> en vez de funciones antiguas como rand().
    - Inicializar el generador con una semilla variable (por ejemplo, std::random_device).
    - Usar distribuciones adecuadas según el rango y tipo de número deseado.
*/

#include <iostream>

int main() {
    // Inicializa la semilla del generador de números aleatorios usando la hora actual.
    // Esto hace que los números generados sean diferentes cada vez que se ejecuta el programa.
    srand(time(NULL));

    // rand() genera un número entero aleatorio entre 0 y RAND_MAX.
    // Usamos el operador % para limitar el rango entre 0 y 99.
    int num = rand() % 100; // Genera un número aleatorio entre 0 y 99

    // Muestra el valor de RAND_MAX (el máximo valor posible que puede devolver rand()).
    std::cout << "Valor de RAND_MAX: " << RAND_MAX << std::endl;

    // Muestra el número aleatorio generado en pantalla.
    std::cout << "Número aleatorio (rand()): " << num << std::endl;

    return 0;
}
