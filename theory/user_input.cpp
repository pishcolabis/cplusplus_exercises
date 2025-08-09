#include <iostream>
/*
La librería <limits> se utiliza para definir los límites de los tipos de datos en C++.
Permite acceder a valores como el mínimo y máximo de tipos numéricos, lo cual es útil
para validar entradas del usuario y evitar errores de desbordamiento.
En este ejemplo, se usa para limpiar el buffer de entrada después de una entrada inválida.
*/
#include <limits> // Para limpiar el buffer de entrada

// Programa que solicita al usuario su edad y valida la entrada.
// Se utilizan buenas prácticas para el manejo de entrada estándar en C++.

int main() {
    int edad; // Variable para almacenar la edad ingresada por el usuario

    std::cout << "Ingrese su edad: "; // Solicita al usuario que ingrese su edad

    // Mejor práctica: Validar la entrada
    // El bucle while se ejecuta mientras la extracción de datos (std::cin >> edad) falle,
    // es decir, cuando el usuario ingresa un valor no entero (como texto o caracteres especiales).
    while (!(std::cin >> edad)) {
        // Si la entrada es inválida, se informa al usuario y se solicita nuevamente la entrada.
        std::cout << "Entrada inválida. Por favor, ingrese un número entero: ";

        std::cin.clear(); // Limpia el estado de error de std::cin.
        // Cuando std::cin falla (por ejemplo, al ingresar texto en vez de un número),
        // se establece un estado de error que impide futuras operaciones de entrada.
        // std::cin.clear() restablece el estado para permitir nuevas lecturas.

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta la entrada incorrecta
        // std::cin.ignore() descarta los caracteres restantes en el buffer de entrada hasta encontrar un salto de línea ('\n')
        // o hasta alcanzar el máximo número de caracteres permitido.
        // Esto asegura que la siguiente lectura de std::cin comience con una entrada limpia.
        // std::numeric_limits<std::streamsize>::max() devuelve el valor máximo posible para el tipo streamsize.
        // Esto le indica a std::cin.ignore() que descarte todos los caracteres restantes en el buffer de entrada
        // hasta encontrar un salto de línea ('\n') o hasta alcanzar ese máximo.
        // Así se asegura que la siguiente lectura de std::cin comience con una entrada limpia.
    }

    // Si la entrada es válida, se muestra la edad ingresada.
    std::cout << "Su edad es: " << edad << std::endl;

    /*
    Buenas prácticas al usar std::cin:
    - Validar siempre la entrada del usuario para evitar errores.
      Por ejemplo, si el usuario ingresa texto en vez de un número, el programa debe manejarlo adecuadamente.
    - Usar std::cin.clear() y std::cin.ignore() para limpiar el buffer si la entrada es incorrecta.
      Esto previene que el programa quede en un estado de error y permite nuevas lecturas.
    - Proporcionar mensajes claros al usuario.
      Informar al usuario sobre el tipo de entrada esperada mejora la experiencia de uso.
    - Evitar el uso de std::cin >> variable sin validación en aplicaciones críticas.
      La falta de validación puede provocar comportamientos inesperados o errores en el programa.

    Este ejemplo solicita al usuario su edad y valida que la entrada sea un número entero.
    Es una forma segura y robusta de manejar la entrada estándar en C++.
    */

    return 0; // Fin del programa
}