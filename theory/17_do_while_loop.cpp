#include <iostream> // Incluye la biblioteca para entrada y salida estándar (cout, cin)
#include <string>   // Incluye la biblioteca para usar el tipo de dato string (cadena de texto)

int main() { // Función principal donde comienza la ejecución del programa
    std::string nombre; // Declara una variable de tipo string para guardar el nombre del usuario

    // El bucle do-while es una estructura de control de flujo que ejecuta un bloque de código al menos una vez,
    // independientemente de si la condición es verdadera o falsa en la primera iteración.
    // Después de ejecutar el bloque, evalúa la condición; si es verdadera, repite el ciclo.
    // Si es falsa, termina el bucle. Esto lo diferencia del bucle while tradicional, que primero evalúa la condición
    // antes de ejecutar el bloque de código, por lo que podría no ejecutarse nunca si la condición inicial es falsa.
    do {
        std::cout << "Por favor, introduce tu nombre: "; // Muestra un mensaje en pantalla pidiendo el nombre
        std::getline(std::cin, nombre); // Lee una línea completa de texto introducida por el usuario y la guarda en 'nombre'

        if (nombre.empty()) { // Verifica si el usuario no ha introducido ningún texto (cadena vacía)
            std::cout << "El nombre no puede estar vacío. Inténtalo de nuevo.\n"; // Muestra un mensaje de error si el nombre está vacío
        }
    } while (nombre.empty()); // Repite el bucle si el nombre sigue vacío

    std::cout << "¡Hola, " << nombre << "! Bienvenido.\n"; // Saluda al usuario usando el nombre introducido

    return 0; // Finaliza el programa y devuelve 0 (indica que todo salió bien)
}
