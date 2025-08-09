/**
 * Ejercicio: Escribe un programa que declare variables de tipo float.
 * Hay que calcular el área de un círculo y el volumen de una esfera.
 * Utiliza la constante M_PI de la biblioteca <cmath> para el valor de π.
 * El área de un círculo se calcula como A = π * r^2 y el volumen
 * de una esfera como V = (4/3) * π * r^3.
 * Muestra los resultados con una precisión de 2 decimales.
 */

 /**
 * Librerías utilizadas:
 * - <iostream>: Permite la entrada y salida estándar, como mostrar resultados en pantalla.
 * - <cmath>: Proporciona funciones matemáticas, como pow() para elevar a potencia y la constante M_PI para el valor de π.
 * - <iomanip>: Permite manipular la presentación de la salida, como establecer la precisión de decimales con setprecision().
 */
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Declarar la variable para el radio
    float radio = 4.5; // Puedes cambiar este valor para probar con otros radios

    // Calcular el área del círculo usando la fórmula A = π * r^2
    float area_circulo = static_cast<float>(M_PI) * std::pow(radio, 2);

    // Calcular el volumen de la esfera usando la fórmula V = (4/3) * π * r^3
    float volumen_esfera = (4.0 / 3.0) * M_PI * radio * radio * radio;

    // Mostrar los resultados con 2 decimales de precisión
    // std::fixed y std::setprecision(2) se usan para mostrar los números decimales con formato fijo y con 2 decimales.
    // std::fixed fuerza a que los números se muestren siempre con decimales (no notación científica).
    // std::setprecision(2) establece que se muestren solo 2 cifras decimales.
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Área del círculo: " << area_circulo << " centímetros cuadrados" << std::endl;
    std::cout << "Volumen de la esfera: " << volumen_esfera << " centímetros cúbicos" << std::endl;

    return 0;
}