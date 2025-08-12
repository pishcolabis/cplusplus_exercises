#include <iostream>
#include <string>

int main() {
    std::string nombre;

    // Bucle while: se repite mientras la condición sea verdadera
    // En este caso, el bucle continuará hasta que el usuario introduzca un nombre no vacío
    while (nombre.empty()) {
        std::cout << "Por favor, introduce tu nombre: ";
        std::getline(std::cin, nombre);

        // Si el usuario no introduce nada, mostramos un mensaje de advertencia
        if (nombre.empty()) {
            std::cout << "El nombre no puede estar vacío. Inténtalo de nuevo.\n";
        }
    }

    // Cuando el usuario introduce un nombre válido, salimos del bucle
    std::cout << "¡Hola, "<< nombre<<"! Bienvenido.\n";

    return 0;
}