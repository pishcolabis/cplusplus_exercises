// Un puntero es una variable que almacena la dirección de memoria de otra variable.
// los cambios que hagamos dentro de la función se reflejarán en las variables originales.
// Esto es útil cuando queremos modificar los valores de las variables originales
// sin necesidad de devolver un valor.

// La razón por la que usamos punteros es para poder manipular directamente
// la memoria donde se almacenan las variables, lo que nos permite cambiar sus valores
// sin necesidad de crear copias de ellas. Esto es especialmente útil cuando trabajamos
// con estructuras de datos grandes o cuando queremos evitar la sobrecarga de rendimiento
// que puede ocurrir al pasar grandes cantidades de datos por valor.

// Al trabajar con punteros, es importante tener cuidado para evitar errores como
// acceder a direcciones de memoria no válidas o liberar memoria que ya ha sido liberada.
// Por eso, es recomendable usar punteros de manera controlada y asegurarse de que
// siempre apunten a direcciones de memoria válidas.

// Al trabajar con punteros, usamos la sintaxis de asterisco (*) para declarar un puntero
// y el operador de dirección (&) para obtener la dirección de memoria de una variable.
// En este caso, estamos pasando los parámetros por valor, lo que significa que
// estamos trabajando con copias de los valores originales. Si queremos que los cambios
// se reflejen en las variables originales, debemos pasar los parámetros por referencia
// usando el operador de referencia (&) en la declaración de la función.

// Los punteros deben tener el tipo de dato correcto para poder apuntar a la dirección de memoria
// de la variable que queremos manipular. Por ejemplo, si queremos apuntar a una variable
// de tipo int, debemos declarar un puntero de tipo int. Esto asegura que el puntero
// pueda acceder correctamente a la memoria donde se almacena el valor de la variable.

#include <iostream>
#include <string>

int main() {
    std::string nombre = "Juan";
    std::string* pNombre = &nombre;
    std::cout << "Dirección Nombre: " << pNombre << std::endl;
    std::cout << "Contenido Nombre: " << *pNombre << std::endl;

    int edad = 30;
    int* pEdad = &edad;
    std::cout << "Dirección Edad: " << pEdad << std::endl;
    std::cout << "Contenido Edad: " << *pEdad << std::endl;

    std::string comidas[] = {"Pizza", "Hamburguesa", "Ensalada"};
    //! El puntero no utiliza el operador de dirección (&) porque ya apunta al primer elemento del array
    std::string* pComidas = comidas; // Apuntamos al primer elemento del array
    // Al ser un array, la variable equivale a un puntero y apunta a la dirección del primer elemento
    std::cout << "Dirección Comidas: " << pComidas << std::endl;
    std::cout << "Contenido Comidas: " << *pComidas << std::endl;

    // Un puntero que no almacena una dirección es un puntero nulo.
    std::string* pNumero = nullptr; // Inicializamos un puntero nulo

    // Descomentamos la siguiente línea porque no es necesario inicializar un puntero con una dirección de memoria
    // Esto es solo un ejemplo de cómo se puede inicializar un puntero con una dirección.
    // int numero = 42;
    // pNumero = &numero;

    // Los punteros nulos son útiles para indicar que un puntero no apunta a ninguna dirección válida.
    // Esto puede ser útil para evitar errores al intentar acceder a direcciones de memoria no válidas.
    // Por ejemplo, si un puntero no ha sido inicializado o si ha sido liberado,
    // es una buena práctica establecerlo a nullptr para evitar accesos indebidos.

    if (pNumero == nullptr) { // Verificamos si el puntero es nulo
        std::cout << "El puntero es nulo." << std::endl;
    } else {
        std::cout << "El puntero no es nulo." << std::endl;
    }
    return 0;
}