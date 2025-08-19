/*
    Templates en C++

    Los templates (plantillas) permiten escribir código genérico que funciona con diferentes tipos de datos. Son fundamentales para la programación genérica en C++ y se usan principalmente para funciones y clases.

    Nota: En otros lenguajes de programación, los templates se conocen como "genéricos" (generics), por ejemplo en Java y C#.

    ¿Para qué sirven?
    - Permiten reutilizar código para distintos tipos sin duplicar funciones o clases.
    - Facilitan la creación de algoritmos y estructuras de datos genéricos (como std::vector).
    - Mejoran la mantenibilidad y escalabilidad del código.

    ¿Cómo se usan?
    - Se definen usando la palabra clave 'template' seguida de parámetros de tipo entre '<>'.
    - El tipo se especifica como un parámetro (por ejemplo, 'typename T' o 'class T').

    Comparación con la sobrecarga de funciones:
    - La sobrecarga consiste en definir varias funciones con el mismo nombre pero diferentes tipos o número de parámetros.
    - Los templates permiten definir una sola función que funciona con cualquier tipo, evitando duplicación.
    - Ejemplo de sobrecarga para encontrar el máximo entre dos números:

        int max(int a, int b) { return (a > b) ? a : b; }
        double max(double a, double b) { return (a > b) ? a : b; }
        char max(char a, char b) { return (a > b) ? a : b; }

    - Con templates, una sola función cubre todos los casos:

        template <typename T>
        T max(T a, T b) { return (a > b) ? a : b; }

    Ejemplo completo usando templates:
*/

#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

// Ejemplo de max si se quisiera usar con diferentes tipos
template <typename T,typename K>
auto max(T a, K b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    double dx = 5.5, dy = 2.3;
    char cx = 'a', cy = 'z';

    std::cout << "Max entre " << x << " y " << y << " es: " << max(x, y) << std::endl;
    std::cout << "Max entre " << dx << " y " << dy << " es: " << max(dx, dy) << std::endl;
    std::cout << "Max entre '" << cx << "' y '" << cy << "' es: " << max(cx, cy) << std::endl;
    std::cout << "Max entre " << x << " y " << cy << " es: " << max(x, cy) << std::endl; // al pasar un char por función, se convierte a int en ASCII
    return 0;
}

/*
    Resumen:
    - Los templates permiten escribir funciones y clases genéricas.
    - Evitan la duplicación de código que ocurre con la sobrecarga.
    - Se usan ampliamente en la STL y en programación moderna en C++.
    - En otros lenguajes se conocen como "genéricos" (generics).

    ¿Qué es STL?
    - STL significa "Standard Template Library".
    - Es una biblioteca estándar de C++ que proporciona estructuras de datos y algoritmos genéricos (como vector, list, map, etc.) basados en templates.
    - Facilita la programación eficiente y reutilizable en C++.
*/