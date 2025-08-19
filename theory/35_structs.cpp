/*
La palabra clave struct en C++ se utiliza para definir una estructura, que es un tipo de dato compuesto que permite agrupar 
diferentes variables bajo un mismo nombre. Cada variable dentro de una estructura se llama miembro y puede ser de diferentes tipos de datos.

¿Para qué sirve?
- Sirve para organizar datos relacionados en una sola entidad.
- Facilita el manejo de datos complejos, como información de una persona (nombre, edad, altura, etc.).

¿Para qué se usa frecuentemente?
- Modelar entidades del mundo real (por ejemplo, un libro, un punto en el espacio, etc.).
- Agrupar datos que pertenecen juntos.

Comparación con un array:
- Un array almacena múltiples elementos del mismo tipo.
- Un struct puede almacenar múltiples elementos de diferentes tipos.
*/

#include <iostream>
using namespace std;

// Definición de una estructura llamada Persona
struct Persona {
    string nombre;
    int edad;
    float altura;
};

void printPersona(const Persona& p);

int main() {
    // Declaración de una variable de tipo Persona
    Persona p1;
    p1.nombre = "Juan";
    p1.edad = 30;
    p1.altura = 1.75;

    cout << "Nombre: " << p1.nombre << endl;
    cout << "Edad: " << p1.edad << endl;
    cout << "Altura: " << p1.altura << endl;

    return 0;
}

// Nota: En C++, las estructuras son similares a las clases, pero por defecto los miembros de una estructura son públicos, 
// mientras que en una clase son privados. Esto significa que puedes acceder directamente a los miembros
// de una estructura sin necesidad de métodos getter/setter, aunque es una buena práctica encapsular los datos en clases.

// Esta función toma una referencia constante a un objeto Persona para evitar copias innecesarias.
// Por defecto, si se pasa como argumento sin referencia, se crea una copia del objeto, lo que puede ser ineficiente para objetos grandes.
// Es decir, si no se usa como referencia, la estructura se pasa como valor.
// Como solución, se utiliza una referencia (&) para evitar la copia y permitir el acceso directo a los miembros del objeto.
// Y como ya es sabido, el uso de const evita modificaciones accidentales al objeto dentro de la función.
// Esta es una buena práctica para mejorar el rendimiento y la seguridad del código.
void printPersona(const Persona& p) {
    cout << "Nombre: " << p.nombre << endl;
    cout << "Edad: " << p.edad << endl;
    cout << "Altura: " << p.altura << endl;
}