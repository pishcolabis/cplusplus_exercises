/*
    Los operadores lógicos permiten combinar o modificar expresiones booleanas (true/false).
    Los principales operadores lógicos en C++ son:
    - AND lógico (&&): Verdadero si ambas expresiones son verdaderas.
    - OR lógico (||): Verdadero si al menos una expresión es verdadera.
    - NOT lógico (!): Invierte el valor de verdad de una expresión.

    Estos operadores se usan comúnmente en estructuras de control como if, while, etc.
*/

#include <iostream>

int main() {
    // Variables booleanas de ejemplo
    bool a = true;
    bool b = false;

    // AND lógico (&&)
    // Solo es verdadero si ambos operandos son verdaderos
    std::cout << "AND lógico (&&):\n";
    std::cout << "true && true = " << (true && true) << "\n";   // 1 (true)
    std::cout << "true && false = " << (true && false) << "\n"; // 0 (false)
    std::cout << "false && false = " << (false && false) << "\n"; // 0 (false)

    // OR lógico (||)
    // Es verdadero si al menos uno de los operandos es verdadero
    std::cout << "\nOR lógico (||):\n";
    std::cout << "true || true = " << (true || true) << "\n";   // 1 (true)
    std::cout << "true || false = " << (true || false) << "\n"; // 1 (true)
    std::cout << "false || false = " << (false || false) << "\n"; // 0 (false)

    // NOT lógico (!)
    // Invierte el valor de verdad del operando
    std::cout << "\nNOT lógico (!):\n";
    std::cout << "!true = " << (!true) << "\n";   // 0 (false)
    std::cout << "!false = " << (!false) << "\n"; // 1 (true)

    // Ejemplo práctico: Validación de acceso
    int edad = 20;
    bool tienePermiso = true;

    // Se permite el acceso si la persona es mayor de edad Y tiene permiso
    if (edad >= 18 && tienePermiso) {
        std::cout << "\nAcceso permitido.\n";
    } else {
        std::cout << "\nAcceso denegado.\n";
    }

    // Ejemplo con OR: Se permite el acceso si la persona es mayor de edad O tiene permiso especial
    bool permisoEspecial = false;
    if (edad >= 18 || permisoEspecial) {
        std::cout << "Acceso permitido por OR lógico.\n";
    } else {
        std::cout << "Acceso denegado por OR lógico.\n";
    }

    // Ejemplo con NOT: Negar acceso si NO tiene permiso
    if (!tienePermiso) {
        std::cout << "Acceso denegado por NOT lógico.\n";
    } else {
        std::cout << "Acceso permitido por NOT lógico.\n";
    }

    return 0;
}

/*
    Resumen:
    - Los operadores lógicos permiten construir condiciones complejas.
    - Se usan principalmente en estructuras de control.
    - Los valores booleanos en C++ se representan como true (1) y false (0).
*/