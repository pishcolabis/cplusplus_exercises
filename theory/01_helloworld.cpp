// Se importa la biblioteca estándar de entrada/salida de C++
// Esto permite usar objetos como std::cout para mostrar texto en la consola
#include <iostream>

// Función principal del programa, donde inicia la ejecución
int main() {
    // Se utiliza std::cout para imprimir "Hello, World!" en la consola
    // std::endl agrega un salto de línea al final y limpia el buffer de salida
    std::cout << "Hello, World!" << std::endl;
    // Otra forma de escribir el salto de línea podría ser:
    std::cout << "Hello" << "\n";
    std::cout << "World!" << std::endl;
    // Se retorna 0 para indicar que el programa terminó correctamente
    // Muchos sistemas operativos interpretan un retorno de 0 como éxito
    // Otros valores pueden indicar diferentes tipos de errores
    return 0;
}