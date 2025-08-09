/*
    arithmetic_operators.cpp
    Teoría: Operadores aritméticos en C++

    Los operadores aritméticos permiten realizar operaciones matemáticas básicas.

    Operadores disponibles:
    -----------------------
    +   Suma
    -   Resta
    *   Multiplicación
    /   División
    %   Módulo (resto de la división, solo para enteros)
    ++  Incremento (aumenta en 1)
    --  Decremento (disminuye en 1)

    Ejemplos de uso:
*/

#include <iostream>

int main() {
    int a = 10, b = 3;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Suma (a + b): " << (a + b) << std::endl;
    std::cout << "Resta (a - b): " << (a - b) << std::endl;
    std::cout << "Multiplicación (a * b): " << (a * b) << std::endl;
    std::cout << "División (a / b): " << (a / b) << std::endl;
    std::cout << "Módulo (a % b): " << (a % b) << std::endl;

    std::cout << "Incremento (a++): " << (a++) << std::endl;
    std::cout << "Nuevo valor de a: " << a << std::endl;
    std::cout << "Decremento (b--): " << (b--) << std::endl;
    std::cout << "Nuevo valor de b: " << b << std::endl;

    return 0;
}

/*
    Notas:
    - El operador % solo funciona con tipos enteros.
    - La división entre enteros descarta la parte decimal.
    - Los operadores ++ y -- pueden usarse antes o después de la variable.
*/