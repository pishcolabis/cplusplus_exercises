#include <iostream>
#include <string>
#include <cstdint> // Para usar uintptr_t

int main() {
    // Declaración e instanciación variables
    std::string nombre = "Juan";
    int edad = 30;
    bool esProgramador = true;

    // Imprimir variables
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Es programador: " << (esProgramador ? "Sí" : "No") << std::endl;

    std::cout << std::endl;

    // Imprimir direcciones de memoria
    std::cout << "Dirección de memoria de nombre: " << &nombre << std::endl;
    std::cout << "Dirección de memoria de edad: " << &edad << std::endl;
    std::cout << "Dirección de memoria de esProgramador: " << &esProgramador << std::endl;

    // El resultado de las direcciones de memoria puede variar en cada ejecución
    // y en cada máquina, ya que depende del sistema operativo y la arquitectura.
    // Representa un valor hexadecimal que indica dónde se almacena la variable en la memoria.

    // Es importante entender que las direcciones de memoria son únicas para cada variable
    // y que dependiendo del tipo de dato, el tamaño de la variable puede variar.
    // Por ejemplo, un int generalmente ocupa 4 bytes, mientras que un std::string puede ocupar más espacio
    // dependiendo de la longitud de la cadena que almacena.

    std::cout << std::endl;

    // Vamos a ver el ejemplo convirtiendo el resultado de las direcciones de memoria a un formato decimal

    std::uintptr_t direccionNombre = reinterpret_cast<std::uintptr_t>(&nombre);
    std::uintptr_t direccionEdad = reinterpret_cast<std::uintptr_t>(&edad);
    std::uintptr_t direccionEsProgramador = reinterpret_cast<std::uintptr_t>(&esProgramador);

    std::cout << "Dirección de memoria en decimal de nombre (string): " << direccionNombre << std::endl;
    std::cout << "Dirección de memoria en decimal de edad (int): " << direccionEdad << std::endl;
    std::cout << "Dirección de memoria en decimal de esProgramador (bool): " << direccionEsProgramador << std::endl;

    // Ahora comparamos los bytes entre las direcciones de memoria
    std::cout << "Bytes Nombre (string): " << (direccionNombre - direccionEdad) << " bytes" << std::endl;
    std::cout << "Bytes Edad (int): " << (direccionEdad - direccionEsProgramador) << " bytes" << std::endl;
    std::cout << "Bytes EsProgramador (bool): " << (direccionEdad - direccionEsProgramador) << " bytes" << std::endl;
    return 0;
}