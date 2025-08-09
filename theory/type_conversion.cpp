/*
En C++, la conversión de tipos (type conversion) es el proceso de transformar un valor de un tipo de dato a otro.
Existen dos formas principales de conversión de tipos:
1. Conversión implícita (automatic type conversion)
2. Conversión explícita (manual type conversion o casting)
*/

// Ejemplo de conversión implícita:
// El compilador convierte automáticamente el tipo de dato cuando es necesario.

#include <iostream>
using namespace std;

int main() {
    int entero = 42;
    double decimal = entero; // Conversión implícita de int a double
    // El valor de 'entero' se convierte automáticamente a double (42.0)
    cout << "Conversión implícita de int a double: " << decimal << endl;

    double resultado = 5 / 2; // División entre enteros, resultado es int (2), luego convertido a double (2.0)
    cout << "División entre enteros (5 / 2): " << resultado << endl;

    // Ejemplo de conversión explícita (casting):
    // El programador indica manualmente el tipo al que se quiere convertir.

    double resultado_correcto = static_cast<double>(5) / 2; // Convertimos 5 a double antes de dividir
    // Tambien se puede usar (double)5 / 2, pero static_cast es más seguro y recomendado en C++ moderno.
    cout << "División con conversión explícita (double): " << resultado_correcto << endl;

    // Ejemplo de conversión explícita de char a int usando código ASCII
    char letra = 'A';
    int codigo_ascii = static_cast<int>(letra); // Convertimos el char a su valor entero (ASCII)
    cout << "El código ASCII de '" << letra << "' es: " << codigo_ascii << endl;

    // Ejemplo de conversión de int a char para obtener un carácter ASCII
    char letra2 = 100;
    cout << "El valor 100 convertido a char es: " << static_cast<char>(letra2) << endl;

    // Ejemplo de conversión para calcular un porcentaje correctamente
    int aciertos = 7;
    int total = 10;
    double porcentaje = static_cast<double>(aciertos) / total * 100; // Convertimos 'aciertos' a double
    cout << "Porcentaje de aciertos: " << porcentaje << "%" << endl;

    return 0;
}

/*
Resumen:
- Conversión implícita: El compilador realiza la conversión automáticamente cuando es seguro.
- Conversión explícita: El programador fuerza la conversión usando casting (static_cast, (tipo), etc).
- Es importante usar conversión explícita para evitar errores, por ejemplo, al dividir enteros y querer obtener un resultado decimal.
* Es especialmente necesario convertir uno de los operandos a un tipo de punto flotante para obtener un resultado decimal correcto.
- static_cast es la forma recomendada de hacer conversiones explícitas en C++ moderno.
*/