/*
La instrucción switch-case permite seleccionar entre múltiples opciones
basándose en el valor de una expresión. Es útil cuando se tienen varios
caminos de ejecución según el valor de una variable.
*/

#include <iostream>
#include <map>
#include <functional>

int main() {
    int opcion;
    std::cout << "Introduce una opción (1-3): ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Has elegido la opción 1\n";
            break;
        case 2:
            std::cout << "Has elegido la opción 2\n";
            break;
        case 3:
            std::cout << "Has elegido la opción 3\n";
            break;
        default:
            std::cout << "Opción no válida\n";
            break;
    }

    /*
        Detalles importantes:
        - La expresión del switch debe ser de tipo entero o enumerado.
        - No se pueden usar cadenas (std::string) directamente en switch-case.
        - Cada case compara el valor de la expresión con una constante.
        - El break evita que se ejecuten los siguientes casos ("fall-through").
        - El default se ejecuta si ningún case coincide.
    */

    /*  
        ¿Se sigue usando switch-case hoy día?
        - Sí, pero en C++ moderno se prefieren alternativas como if-else, 
          especialmente cuando se trabaja con tipos no enteros o lógica más compleja.
        - Para lógica más avanzada, se pueden usar mapas (std::map, std::unordered_map)
          que asocian claves con funciones, o incluso lambdas y std::variant con std::visit.

        Ejemplo alternativo usando std::map y funciones:
    */


    // Mapa que asocia cada opción con una función lambda que realiza la acción correspondiente
    // Se crea un mapa llamado 'acciones' que asocia cada número de opción con una función lambda.
    // Cada lambda realiza la acción correspondiente.

    // Una lambda es una función anónima que se puede definir en el lugar donde se usa.
    // En este caso, se usa para definir las operaciones de la calculadora de manera concisa.
    // El uso de [] permite que la lambda acceda y ejecute código directamente,
    // sin necesidad de pasarlas como argumentos.

    // Las funciones lambda son una característica de C++11 y posteriores, y permiten crear funciones
    // de manera más flexible y concisa, especialmente en contextos donde se necesitan funciones pequeñas
    // y específicas, como en este caso de ejemplo.
    std::map<int, std::function<void()>> acciones = {
        {1, [](){ std::cout << "Has elegido la opción 1\n"; }},
        {2, [](){ std::cout << "Has elegido la opción 2\n"; }},
        {3, [](){ std::cout << "Has elegido la opción 3\n"; }}
    };

    if (acciones.count(opcion)) {
        acciones[opcion]();
    } else {
        std::cout << "Opción no válida\n";
    }

    /*
        Ventajas de las alternativas modernas:
        - Permiten trabajar con cualquier tipo de clave.
        - Son más flexibles y escalables.
        - Facilitan la separación de lógica y la reutilización de código.

        En resumen:
        - switch-case sigue siendo útil para casos simples y valores enteros.
        - Para lógica más compleja o tipos avanzados, se recomienda usar alternativas modernas.
    */

    return 0;
}