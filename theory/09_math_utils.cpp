#include <iostream>
#include <cmath>      // Incluye funciones matemáticas estándar como pow, sqrt, abs, round, ceil, floor
#include <algorithm>  // Incluye utilidades como std::max y std::min

int main() {
    // std::max: Devuelve el mayor de dos valores.
    // Buena práctica: Usar std::max para comparar variables en vez de condicionales manuales.
    int a = 10;
    int b = 20;
    int maxValue = std::max(a, b); // Compara 'a' y 'b', devuelve el mayor. Útil para encontrar límites superiores.
    std::cout << "std::max(" << a << ", " << b << ") = " << maxValue << std::endl;

    // std::min: Devuelve el menor de dos valores.
    // Buena práctica: Usar std::min para evitar errores en comparaciones manuales.
    int minValue = std::min(a, b); // Compara 'a' y 'b', devuelve el menor. Útil para límites inferiores.
    std::cout << "std::min(" << a << ", " << b << ") = " << minValue << std::endl;

    // std::pow: Eleva un número a una potencia.
    // Buena práctica: Usar std::pow para cálculos exponenciales en vez de multiplicaciones repetidas.
    double base = 2.0;
    double exponent = 3.0;
    double powerResult = std::pow(base, exponent); // Calcula 2^3 = 8. Útil para fórmulas matemáticas.
    std::cout << "std::pow(" << base << ", " << exponent << ") = " << powerResult << std::endl;

    // std::sqrt: Calcula la raíz cuadrada de un número.
    // Buena práctica: Validar que el número sea no negativo antes de calcular la raíz cuadrada.
    double number = 16.0;
    double sqrtResult = std::sqrt(number); // Calcula la raíz cuadrada de 16 = 4. Útil en geometría y física.
    std::cout << "std::sqrt(" << number << ") = " << sqrtResult << std::endl;

    // std::abs: Devuelve el valor absoluto de un número.
    // Buena práctica: Usar std::abs para normalizar valores negativos, por ejemplo en distancias.
    int negative = -42;
    int absResult = std::abs(negative); // Convierte -42 en 42. Útil para diferencias y magnitudes.
    std::cout << "std::abs(" << negative << ") = " << absResult << std::endl;

    // std::round: Redondea un número al entero más cercano.
    // Buena práctica: Usar std::round para mostrar resultados amigables al usuario o para cálculos financieros.
    double value1 = 3.6;
    double value2 = 3.4;
    double roundResult1 = std::round(value1); // Redondea 3.6 a 4. Útil para aproximar valores.
    double roundResult2 = std::round(value2); // Redondea 3.4 a 3.
    std::cout << "std::round(" << value1 << ") = " << roundResult1 << std::endl;
    std::cout << "std::round(" << value2 << ") = " << roundResult2 << std::endl;

    // std::ceil: Redondea hacia arriba al entero más cercano.
    // Buena práctica: Usar std::ceil cuando se necesita asegurar que el resultado no sea menor al valor original.
    double ceilValue = 2.3;
    double ceilResult = std::ceil(ceilValue); // Redondea 2.3 a 3. Útil para cálculos de capacidad mínima.
    std::cout << "std::ceil(" << ceilValue << ") = " << ceilResult << std::endl;

    // std::floor: Redondea hacia abajo al entero más cercano.
    // Buena práctica: Usar std::floor para asegurar que el resultado no exceda el valor original.
    double floorValue = 2.7;
    double floorResult = std::floor(floorValue); // Redondea 2.7 a 2. Útil para cálculos de límites inferiores.
    std::cout << "std::floor(" << floorValue << ") = " << floorResult << std::endl;

    // Nota de buenas prácticas generales:
    // - Usar siempre los encabezados adecuados para cada función.
    // - Validar los datos de entrada antes de aplicar funciones matemáticas (por ejemplo, evitar raíces de números negativos).
    // - Preferir funciones estándar por su robustez y portabilidad.
    // - Comentar el código para facilitar el mantenimiento y la comprensión por otros desarrolladores.

    return 0; // Fin del programa principal.
}