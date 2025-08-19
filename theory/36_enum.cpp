/*
    Enum en C++

    Un enum (enumeración) es un tipo de dato definido por el usuario que consiste en un conjunto de constantes con nombre, l
    lamadas enumeradores. Los enums se utilizan para representar valores que tienen sentido como un conjunto limitado de opciones,
    mejorando la legibilidad y mantenibilidad del código.

    Sintaxis básica:
    enum NombreEnum { VALOR1, VALOR2, VALOR3 };

    Por defecto, los valores de los enumeradores comienzan en 0 y se incrementan en uno por cada elemento. Es posible asignar valores específicos.
*/

#include <iostream>

// Definición de un enum para los días de la semana
enum DiaSemana {
    Lunes,      // 0
    Martes,     // 1
    Miercoles,  // 2
    Jueves,     // 3
    Viernes,    // 4
    Sabado,     // 5
    Domingo     // 6
};

/*
    Ejemplo de enum class en C++11

    Los enum class ofrecen mayor seguridad de tipo y evitan colisiones de nombres.
*/

enum class Color {
    Rojo,
    Verde,
    Azul
};

void ejemploEnumClass();

int main() {
    DiaSemana hoy = Miercoles;

    if (hoy == Miercoles) {
        std::cout << "Hoy es miércoles." << std::endl;
    }

    // Los enums pueden ser convertidos a int
    std::cout << "El valor numérico de 'Miercoles' es: " << Miercoles << std::endl;

    // Ejemplo de uso de enum class
    ejemploEnumClass();

    return 0;
}

/*
    Puntos esenciales:
    - Los enums mejoran la legibilidad del código.
    - Los valores de los enums pueden ser convertidos a int.
    - Se pueden asignar valores específicos a los enumeradores.
    - Desde C++11 existen los enum class, que ofrecen mayor seguridad de tipo.
*/

void ejemploEnumClass() {
    Color colorFavorito = Color::Verde;

    if (colorFavorito == Color::Verde) {
        std::cout << "El color favorito es verde." << std::endl;
    }

    // Para convertir a int, se necesita un cast explícito
    std::cout << "El valor numérico de 'Verde' es: " << static_cast<int>(Color::Verde) << std::endl;
}