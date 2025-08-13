#include <iostream>

// Scope de variables
// El scope de una variable determina dónde puede ser accedida en el código.
// En C++, las variables pueden tener scope global, local o de bloque.
// Las variables globales son accesibles en todo el archivo, mientras que las locales
// solo son accesibles dentro de la función o bloque donde se definen.

// Variable global: su scope es todo el archivo
int globalVar = 10;

// Función fuera del main: tiene su propio scope
void mostrarGlobal() {
    // Puede acceder a la variable global
    std::cout << "Desde mostrarGlobal, globalVar = " << globalVar << std::endl;
}

int main() {
    // Variable local: su scope es solo dentro de main
    int localVar = 20;

    std::cout << "Dentro de main, localVar = " << localVar << std::endl;
    std::cout << "Dentro de main, globalVar = " << globalVar << std::endl;

    // Bloque interno: scope limitado al bloque
    {
        int bloqueVar = 30;
        std::cout << "Dentro del bloque, bloqueVar = " << bloqueVar << std::endl;
    }
    // bloqueVar ya no existe aquí

    // Llamada a función fuera del main
    mostrarGlobal();

    // No se puede acceder a bloqueVar aquí, causaría error si se descomenta:
    // std::cout << bloqueVar << std::endl;

    return 0;
}