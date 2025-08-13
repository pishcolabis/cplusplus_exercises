#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>

// Explicación completa sobre expresiones lambda en C++.

// Las expresiones lambda son una característica introducida en C++11 que permite definir funciones anónimas.
// Son útiles para escribir código conciso, especialmente en algoritmos, callbacks, y programación funcional.

// Sintaxis básica:
// [captura](parámetros) -> tipo_retorno { cuerpo }

// Ejemplo simple:
auto suma = [](int a, int b) { return a + b; };
// 'suma' es un objeto función que puede llamarse como suma(2, 3)

// 1. Captura de variables:
// Las lambdas pueden capturar variables del contexto donde se definen.
// - []        : No captura nada.
// - [=]       : Captura todas las variables usadas por valor.
// - [&]       : Captura todas las variables usadas por referencia.
// - [x]       : Captura solo 'x' por valor.
// - [&x]      : Captura solo 'x' por referencia.


// Ejemplo de captura:
// Estas variables y lambdas deben ir dentro de una función (por ejemplo, main).
// Se muestra su uso dentro de main más abajo.

// 2. Uso en algoritmos estándar:
// Incluido arriba.

// 3. Tipos de retorno:
// El tipo de retorno puede deducirse automáticamente, pero se puede especificar con '-> tipo':
// Ejemplo dentro de main.

// 4. Lambdas como argumentos de funciones:
void aplicar(const std::vector<int>& v, const std::function<void(int)>& f) {
    for (int n : v) f(n);
}

// 5. Lambdas y punteros a función:
// Las lambdas sin captura pueden convertirse en punteros a función:
void imprimir(int x) { std::cout << x << "\n"; }
void ejecutar(void(*pf)(int), int valor) { pf(valor); pf(valor); }

// 6. Compatibilidad y limitaciones:
// - Las lambdas con captura NO pueden convertirse en punteros a función.
// - Las lambdas son objetos de tipo único, definidos por el compilador.
// - Se pueden almacenar en std::function si la firma es compatible.

// 7. Lambdas mutables:
// Por defecto, las variables capturadas por valor son constantes dentro de la lambda.
// Usando 'mutable', se pueden modificar:
// Ejemplo dentro de main.

// 8. Lambdas recursivas:
// Para hacer una lambda recursiva, se puede usar std::function:
// Ejemplo dentro de main.

// 9. Lambdas genéricas (C++14+):
// Ejemplo dentro de main.

// 10. Uso avanzado: lambdas en clases, como miembros, etc.

// Resumen de ventajas:
// - Código más conciso y legible.
// - Facilita la programación funcional y el uso de algoritmos.
// - Permite definir funciones locales y callbacks fácilmente.

int main() {
    // Ejemplo de captura:
    int x = 10, y = 20;
    auto f1 = [x, &y]() { return x + y; }; // x por valor, y por referencia
    std::cout << "f1(): " << f1() << std::endl;
    y = 30;
    std::cout << "f1() tras cambiar y: " << f1() << std::endl;

    // 2. Uso en algoritmos estándar:
    std::vector<int> v = {1, 2, 3, 4, 5};
    // Filtrar elementos pares usando lambda:
    v.erase(std::remove_if(v.begin(), v.end(), [](int n) { return n % 2 == 0; }), v.end());

    // 3. Tipos de retorno:
    auto cuadrado = [](int x) -> int { return x * x; };
    std::cout << "cuadrado(4): " << cuadrado(4) << std::endl;

    // 4. Lambdas como argumentos de funciones:
    aplicar(v, [](int n) { std::cout << n << " "; });
    std::cout << std::endl;

    // 5. Lambdas y punteros a función:
    ejecutar([](int x) { std::cout << x << "\n"; }, 42); // lambda sin captura

    // 7. Lambdas mutables:
    auto contador = [x]() mutable { return ++x; };
    std::cout << "contador(): " << contador() << std::endl;
    std::cout << "contador(): " << contador() << std::endl;

    // 8. Lambdas recursivas:
    std::function<int(int)> factorial = [&](int n) {
        return n <= 1 ? 1 : n * factorial(n - 1);
    };
    std::cout << "factorial(5): " << factorial(5) << std::endl;

    // 9. Lambdas genéricas (C++14+):
    auto duplicar = [](auto x) { return x + x; };
    std::cout << "duplicar(3): " << duplicar(3) << std::endl;
    std::cout << "duplicar(2.5): " << duplicar(2.5) << std::endl;

    // Ejemplo completo:
    std::vector<int> datos = {1, 2, 3, 4, 5};

    // Imprimir solo los impares
    for (int n : datos) {
        if (n % 2 != 0) std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}
