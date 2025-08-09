#include <iostream>
#include <vector>

/*
typedef es una palabra clave en C++ utilizada tradicionalmente para crear alias de tipos, facilitando la legibilidad y reutilización del código.
Sin embargo, en C++ moderno se recomienda usar using para definir alias de tipos, ya que ofrece una sintaxis más clara y permite crear alias
de tipos plantilla, algo que typedef no soporta. Usar using mejora la integración con las características avanzadas del lenguaje y hace el 
código más mantenible y expresivo.

Los alias de tipo plantilla son alias que dependen de un parámetro de tipo (template). 
Con using se pueden crear alias de tipos plantilla, lo que permite definir alias genéricos para tipos que aceptan parámetros, 
como std::vector<T>. Esto no es posible con typedef, que solo permite alias de tipos concretos.

Por ejemplo:
template<typename T>
using vector_t = std::vector<T>;

Puedes ver un ejemplo más claro de alias de tipo plantilla en el fichero templates.cpp.
*/

// Ejemplo clásico usando typedef
typedef int entero_t; // Se recomienda terminar con _t para indicar que es un tipo definido por el usuario
typedef std::vector<int> vector_entero_t;

// Explicación:
// El sufijo _t ayuda a distinguir los tipos definidos por el usuario de los tipos estándar.
// Esto mejora la legibilidad y evita confusiones con nombres de variables o funciones.

// Ejemplo moderno usando using (alias de tipo)
using flotante_t = float;
using vector_flotante_t = std::vector<float>;

// Ventajas de using sobre typedef:
// 1. Sintaxis más clara y consistente.
// 2. Permite definir alias de tipos con plantillas (typedef no lo permite).
// 3. Mejor integración con el sistema de tipos de C++ moderno.

template<typename T>
using vector_t = std::vector<T>; // Esto no se puede hacer con typedef

int main() {
    entero_t a = 10;
    vector_entero_t vec = {1, 2, 3};

    flotante_t b = 3.14f;
    vector_flotante_t vecf = {1.1f, 2.2f, 3.3f};

    vector_t<double> vecd = {1.0, 2.0, 3.0};

    std::cout << "entero_t: " << a << std::endl;
    std::cout << "vector_entero_t size: " << vec.size() << std::endl;
    std::cout << "flotante_t: " << b << std::endl;
    std::cout << "vector_flotante_t size: " << vecf.size() << std::endl;
    std::cout << "vector_t<double> size: " << vecd.size() << std::endl;

    return 0;
}

// Resumen:
// - Usar _t al final de los alias de tipo mejora la claridad.
// - Preferir using sobre typedef en C++ moderno por su flexibilidad y sintaxis.