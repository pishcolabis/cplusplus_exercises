#include <iostream>
#include <string>
/*
* Ejercicio: Declara dos variables enteras con valores fijos en el código.
* Calcula y muestra por pantalla su suma, resta, multiplicación y división
* (si el divisor no es cero).
*/


int main() {
    // Declaración de las variables
    int a = 5;
    int b = 10;

    // Operaciones
    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;
    std::string division_result;
    if (b == 0) {
        division_result = "División por cero no permitida";
    } else {
        int division = a / b;
        // Se usa std::to_string para convertir el resultado entero 'division' a string y poder concatenarlo.
        // Alternativas: usar std::stringstream, std::ostringstream, o printf/format para formatear la salida.
        division_result = "Ésta es la division: " + std::to_string(division);
    }
    std::cout<<"Ésta es la suma: "<<suma<<std::endl;
    std::cout<<"Ésta es la resta: "<<resta<<std::endl;
    std::cout<<"Ésta es la multiplicación: "<<multiplicacion<<std::endl;
    std::cout<<division_result<<std::endl;
}