
/*
    Imagine que estás desarrolando un juego de mesa y necesitas determinar quién será el primer jugador.
    Escribe un programa en C++ que simule el lanzamiento de un dado para decidir quién será el primer jugador.
    El programa debe generar un número aleatorio entre 1 y 6 (simulando el lanzamiento de un dado).
*/

#include <iostream>

int main() {
    srand(time(NULL));

    int num = rand() % 6; // Genera un número aleatorio entre 0 y 5
    num += 1; // Ajusta el rango para que sea entre 1 y 6

    std::cout << "El jugador que comienza es: Jugador "<<num<<std::endl;

    return 0;
}