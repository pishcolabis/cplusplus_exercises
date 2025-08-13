#include <iostream>
#include <string>
#include <algorithm> // Para usar std::for_each

int main() {
    std::string nombres[] = {"Ana", "Luis", "Maria", "Pedro"};
    double notas[] = {8.5, 7.2, 9.0, 6.8};

    // Usando un bucle foreach tradicional para recorrer los arrays
    std::cout << "Usando bucle foreach tradicional:\n";

    for (std::string nombre : nombres) {
        std::cout << "Nombre: " << nombre << std::endl;
    }

    for (double nota : notas) {
        std::cout << "Nota: " << nota << std::endl;
    }

    // Usando std::for_each para recorrer los arrays
    std::cout << "\nUsando std::for_each:\n";

    std::for_each(std::begin(nombres), std::end(nombres), [](std::string nombre) {
        std::cout << "Nombre (foreach): " << nombre << std::endl;
    });

    std::for_each(std::begin(notas), std::end(notas), [](double nota) {
        std::cout << "Nota (foreach): " << nota << std::endl;
    });

    return 0;
}
