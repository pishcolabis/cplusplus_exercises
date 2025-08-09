/*
- Usa una cadena de texto predefinida.
- Convierte la cadena a mayúsculas usando métodos de string y char.
- Cuenta cuántas vocales hay en la cadena.
- Muestra la cadena convertida y el número de vocales.

*/

/*
Librerías utilizadas:
- Proporciona funcionalidades para la entrada y salida estándar, como el uso de std::cout para mostrar información en pantalla.
- Permite trabajar con objetos de tipo std::string, facilitando la manipulación de cadenas de texto en C++.
- Ofrece funciones para la manipulación de caracteres, como std::toupper, que se utiliza para convertir caracteres a mayúsculas.
*/
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string texto = "Ejemplo de cadena para el ejercicio";

    // Convertir a mayúsculas
    // Recorre cada carácter por referencia para modificarlo directamente en la cadena
    for (char &c : texto) {
        c = std::toupper(c); // Convierte el carácter a mayúscula en la variable 'texto' gracias a la referencia.
    }

    // Contar vocales
    int vocales = 0;
    for (char c : texto) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vocales++;
        }
    }

    std::cout << "Cadena en mayúsculas: " << texto << std::endl;
    std::cout << "Número de vocales: " << vocales << std::endl;

    return 0;
}
