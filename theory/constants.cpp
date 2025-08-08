#include <iostream>

int main() {
    // Constante de tipo entero
    const int MAX_AGE = 100;
    std::cout << "MAX_AGE: " << MAX_AGE << std::endl;

    // Constante de tipo double
    const double PI = 3.14159;
    std::cout << "PI: " << PI << std::endl;

    // Constante de tipo char
    const char NEWLINE = '\n';
    std::cout << "NEWLINE: " << (int)NEWLINE << std::endl;

    // Constante de tipo string (C++11 en adelante)
    const std::string APP_NAME = "MiAplicacion";
    std::cout << "APP_NAME: " << APP_NAME << std::endl;
    
    // Antes de C++11, se usaba const char* para cadenas constantes
    const char* APP_NAME_OLD = "MiAplicacion";
    std::cout << "APP_NAME_OLD: " << APP_NAME_OLD << std::endl;

    // Alternativa: constexpr (evaluada en tiempo de compilación)
    constexpr int DAYS_IN_WEEK = 7;
    std::cout << "DAYS_IN_WEEK: " << DAYS_IN_WEEK << std::endl;

    // Alternativa: #define (preprocesador)
    #define VERSION "1.0.0"
    std::cout << "VERSION: " << VERSION << std::endl;

    // Constante de tipo float
    const float GRAVITY = 9.8f;
    std::cout << "GRAVITY: " << GRAVITY << std::endl;

    return 0;
}