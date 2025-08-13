#include <iostream>
#include <string>

// Sobrecarga de funciones
// La sobrecarga de funciones permite definir varias funciones con el mismo nombre,
// pero con diferentes parámetros. El compilador selecciona automáticamente la versión
// correcta de la función según el número y tipo de argumentos que se le pasan.


// Definición de la función hornearPizza con un solo ingrediente.
// Esta es la primera versión sobrecargada de la función.
void hornearPizza(const std::string ingrediente1) {
    std::cout << "Horneando pizza con " << ingrediente1 << "." << std::endl;
}

// Definición de la función hornearPizza con dos ingredientes.
// Esta es la segunda versión sobrecargada de la función.
void hornearPizza(const std::string ingrediente1, const std::string ingrediente2) {
    std::cout << "Horneando pizza con " << ingrediente1 << " y " << ingrediente2 << "." << std::endl;
}

// Definición de la función hornearPizza con tres ingredientes.
// Esta es la tercera versión sobrecargada de la función.
void hornearPizza(const std::string ingrediente1, const std::string ingrediente2, const std::string ingrediente3) {
    std::cout << "Horneando pizza con " << ingrediente1 << ", " << ingrediente2 << " y " << ingrediente3 << "." << std::endl;
}

int main() {
    // Llamada a la función con un solo argumento.
    // Se ejecuta la versión que recibe un ingrediente.
    hornearPizza("queso");

    // Llamada a la función con dos argumentos.
    // Se ejecuta la versión que recibe dos ingredientes.
    hornearPizza("queso", "jamón");

    // Llamada a la función con tres argumentos.
    // Se ejecuta la versión que recibe tres ingredientes.
    hornearPizza("queso", "jamón", "champiñones");

    return 0;
}

// La sobrecarga de funciones permite definir varias funciones con el mismo nombre,
// pero con diferentes parámetros. El compilador selecciona automáticamente la versión
// correcta de la función según el número y tipo de argumentos que se le pasan.