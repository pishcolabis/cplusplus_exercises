#include <iostream>
#include <string>

void cambiarPorValor(std::string cafe, std::string agua);

void cambiarPorValorConstantes(const std::string cafe, const std::string agua);

void cambiarPorReferencia(std::string& cafe, std::string& agua);

// Nota: No se puede hacer sobrecarga de funciones con el mismo nombre
// si las funciones tienen el mismo número de parámetros y tipos de datos.
// Aunque por un lado sea por valor y por otro por referencia,
// el compilador no puede diferenciarlas solo por eso.

int main() {
    // Intercambiar los valores de dos variables usando una variable temporal
    // Esta es la forma tradicional de hacerlo
    // y es útil para entender cómo funcionan las asignaciones en C++.
    std::string cafe = "agua";
    std::string agua = "cafe";

    std::string temp;
    temp = cafe; // Guardamos el valor de cafe en temp
    cafe = agua; // Asignamos el valor de agua a cafe
    agua = temp; // Asignamos el valor de temp (originalmente cafe) a agua

    std::cout << "Cafe: " << cafe << std::endl; // Debería imprimir "cafe"
    std::cout << "Agua: " << agua << std::endl; // Debería imprimir "agua"

    // Ahora vamos a usar una función para cambiar los valores de las variables
    // Esta función recibe los valores por valor, no por referencia.
    std::string cafe2 = "agua";
    std::string agua2 = "cafe";

    // Imprimimos las direcciones de memoria de las variables
    std::cout << "Dirección de memoria de cafe2: " << &cafe2 << std::endl;
    std::cout << "Dirección de memoria de agua2: " << &agua2 << std::endl;

    cambiarPorValor(cafe2, agua2);

    std::cout << "Cafe2 (después de cambiar por valor): " << cafe2 << std::endl; // Debería imprimir "agua"
    std::cout << "Agua2 (después de cambiar por valor): " << agua2 << std::endl; // Debería imprimir "cafe"

    // Ahora vamos a usar una función que recibe los valores por referencia
    // Esto significa que los cambios que hagamos dentro de la función
    // se reflejarán en las variables originales.
    cambiarPorReferencia(cafe2, agua2);

    std::cout << "Cafe2 (después de cambiar por referencia): " << cafe2 << std::endl; // Debería imprimir "cafe"
    std::cout << "Agua2 (después de cambiar por referencia): " << agua2 << std::endl; // Debería imprimir "agua"

    // Una forma de darle seguridad a ciertas funciones que reciben parámetros por valor
    // es asegurarnos de que no se modifiquen los valores originales.
    // Esto se puede hacer usando const para indicar que los parámetros no deben ser modificados.
    // Esto puede ser útil en funciones que no necesitan modificar los valores,
    // pero aún así queremos asegurarnos de que no se cambien accidentalmente.
    // Además, en caso de trabajar con un equipo grande,
    // es una buena práctica para evitar errores.
    cambiarPorValorConstantes(cafe2, agua2);
    return 0;
}

// Cuando pasamos los parámetros por valor, los cambios no se reflejan en las variables originales
// porque estamos trabajando con copias de los valores.
// Si queremos que los cambios se reflejen, debemos pasar los parámetros por referencia.
void cambiarPorValor(std::string cafe, std::string agua) {
    // Imprimimos las direcciones de memoria de las variables
    std::cout << "Dirección de memoria de cafe en la función cambiarPorValor: " << &cafe << std::endl;
    std::cout << "Dirección de memoria de agua en la función cambiarPorValor: " << &agua << std::endl;
    std::string temp = cafe; // Guardamos el valor de cafe en temp
    cafe = agua; // Asignamos el valor de agua a cafe
    agua = temp; // Asignamos el valor de temp (originalmente cafe) a agua
}

// Esta función recibe los parámetros por referencia, lo que significa que
// cualquier cambio que hagamos en cafe y agua se reflejará en las variables originales.
// Esto es útil cuando queremos modificar los valores de las variables originales
// sin necesidad de devolver un valor.
void cambiarPorReferencia(std::string& cafe, std::string& agua) {
    // Imprimimos las direcciones de memoria de las variables
    std::cout << "Dirección de memoria de cafe en la función cambiarPorReferencia: " << &cafe << std::endl;
    std::cout << "Dirección de memoria de agua en la función cambiarPorReferencia: " << &agua << std::endl;
    std::string temp = cafe; // Guardamos el valor de cafe en temp
    cafe = agua; // Asignamos el valor de agua a cafe
    agua = temp; // Asignamos el valor de temp (originalmente cafe) a agua
}

void cambiarPorValorConstantes(const std::string cafe, const std::string agua){
    // Esta función no puede modificar los valores de cafe y agua
    // porque son constantes. Cualquier intento de modificarlos
    // resultará en un error de compilación.
    std::cout << "Esta función no puede modificar los valores de cafe y agua." << std::endl;
    std::cout << "Dirección de memoria de cafe en la función cambiarPorValorConstantes: " << &cafe << std::endl;
    std::cout << "Dirección de memoria de agua en la función cambiarPorValorConstantes: " << &agua << std::endl;
}