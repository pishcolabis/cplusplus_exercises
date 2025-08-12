#include <iostream>

int main() {
    srand(time(NULL));
    int numero_secreto = rand() % 10 + 1;
    int intento, intentos_restantes = 3;

    std::cout << "Adivina el número (del 1 al 10). Tienes 3 intentos.\n";

    do {
        std::cout << "Intento #" << (4 - intentos_restantes) << ": ";
        std::cin >> intento;

        if (intento == numero_secreto) {
            std::cout << "¡Felicidades! Adivinaste el número.\n";
            break;
        } else {
            std::cout << "Incorrecto.\n";
            intentos_restantes--;
        }
    } while (intentos_restantes > 0);

    if (intento != numero_secreto) {
        std::cout << "Lo siento, no adivinaste el número. Era: " << numero_secreto << "\n";
    }

    return 0;
}