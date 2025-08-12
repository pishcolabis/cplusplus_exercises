#include <iostream>
#include <string>
#include <cctype>

int main() {
    // Creamos una variable para guardar la palabra o frase que el usuario escriba
    std::string palabra;

    // Mostramos un mensaje en pantalla para pedir al usuario que escriba algo
    std::cout << "Introduce una palabra o frase: ";

    // Leemos la línea completa que el usuario escribe y la guardamos en 'palabra'
    std::getline(std::cin, palabra);

    // Recorremos cada letra de la palabra usando un bucle for
    for (size_t i = 0; i < palabra.length(); ++i) {
        // Si la posición es par (0, 2, 4...), convertimos la letra a mayúscula
        if (i % 2 == 0)
            std::cout << (char)std::toupper(palabra.at(i));
        // Si la posición es impar (1, 3, 5...), convertimos la letra a minúscula
        else
            std::cout << (char)std::tolower(palabra.at(i));
    }
    // Al final, mostramos un salto de línea para terminar la salida
    std::cout << std::endl;

    // Indicamos que el programa terminó correctamente
    return 0;
}
