#include <iostream>
#include <string>      // Para std::string
#include <vector>      // Para std::vector
#include <array>       // Para std::array
#include <map>         // Para std::map
#include <set>         // Para std::set

int main() {
    // Tipos primitivos
    bool flag = true;                // Booleano: verdadero o falso
    char letter = 'A';               // Carácter: almacena un solo símbolo
    signed char s_char = -10;        // Carácter con signo
    unsigned char u_char = 200;      // Carácter sin signo
    short s_num = -32768;            // Entero corto con signo
    unsigned short us_num = 65535;   // Entero corto sin signo
    int number = 42;                 // Entero estándar con signo
    unsigned int u_number = 100;     // Entero estándar sin signo
    long l_number = 100000L;         // Entero largo con signo
    unsigned long ul_number = 100000UL; // Entero largo sin signo
    long long ll_number = 9000000000LL; // Entero muy largo con signo
    unsigned long long ull_number = 9000000000ULL; // Entero muy largo sin signo
    float f_number = 3.14f;          // Número de punto flotante simple precisión
    double d_number = 2.71828;       // Número de punto flotante doble precisión
    long double ld_number = 1.6180339887L; // Número de punto flotante extra precisión

    // Tipos de clase frecuentes en C++
    std::string text = "Hola mundo"; // Cadena de texto (clase estándar)
    std::vector<int> vec = {1, 2, 3}; // Vector dinámico de enteros
    std::array<int, 3> arr = {4, 5, 6}; // Array de tamaño fijo
    std::map<std::string, int> ages = {{"Juan", 30}, {"Ana", 25}}; // Diccionario clave-valor
    std::set<int> unique_numbers = {1, 2, 2, 3}; // Conjunto de valores únicos

    // Punteros y referencias
    int* ptr = &number;              // Puntero a entero
    int& ref = number;               // Referencia a entero

    // nullptr (puntero nulo moderno)
    int* null_ptr = nullptr;

    // Imprimir algunos valores para evitar advertencias
    std::cout << "flag: " << flag << "\n";
    std::cout << "letter: " << letter << "\n";
    std::cout << "number: " << number << "\n";
    std::cout << "text: " << text << "\n";
    std::cout << "vec[0]: " << vec[0] << "\n";
    std::cout << "arr[0]: " << arr[0] << "\n";
    std::cout << "ages[Juan]: " << ages["Juan"] << "\n";
    std::cout << "unique_numbers size: " << unique_numbers.size() << "\n";
    std::cout << "ptr points to: " << *ptr << "\n";
    std::cout << "ref: " << ref << "\n";
    std::cout << "null_ptr: " << null_ptr << "\n";

    return 0;
}