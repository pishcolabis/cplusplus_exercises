/*
Crea un programa en C++ que defina dos namespaces llamados `Math` y `Physics`.  
En el namespace `Math`, implementa una función `add` que suma dos números enteros.  
En el namespace `Physics`, implementa una función `velocity` que calcula la velocidad dada la distancia y el tiempo (ambos de tipo `double`).  
En la función principal (`main`), utiliza ambas funciones mostrando sus resultados por pantalla.
*/

/* Librerías utilizadas:
 * - <iostream>: Permite la entrada y salida estándar, como mostrar resultados en pantalla.
 * - <stdexcept>: Proporciona excepciones estándar, como std::invalid_argument para manejar errores de argumentos inválidos.
*/
#include <iostream>
#include <stdexcept>

namespace Math {
    int add (int a, int b) {
        return a + b;
    }
}

namespace Physics {
    double velocity(double distance, double time) {
        if (time == 0) {
            throw std::invalid_argument("Time cannot be zero.");
        }
        return distance / time;
    }
}

int main() {
    // Usando la función add del namespace Maths
    int a = 5, b = 10;
    int sum = Math::add(a, b);
    std::cout << "Suma de " << a << " y " << b << " es: " << sum << std::endl;

    // Usando la función velocity del namespace Physics
    double distance = 100.0; // en metros
    double time = 2.0; // en segundos

    try {
        double vel = Physics::velocity(distance, time);
        std::cout << "La velocidad es: " << vel << " m/s" << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}