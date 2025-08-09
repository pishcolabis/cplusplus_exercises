/*
- Un namespace (espacio de nombres) es una forma de organizar el código y evitar conflictos de nombres.
- Permite agrupar funciones, variables y clases bajo un identificador común.
- Se utiliza para evitar colisiones cuando diferentes partes del código usan los mismos nombres.

Elementos:
1. Definición de namespace:
    Se usa la palabra clave 'namespace' seguida del nombre y un bloque de código.

2. Acceso a elementos del namespace:
    Se puede acceder usando el operador de resolución de ámbito (::).

3. Uso de 'using':
    Permite usar los elementos del namespace sin escribir el nombre completo.

Ejemplo:
*/

#include <iostream>

// Definición de un namespace llamado 'math'
namespace math {
     int suma(int a, int b) {
          return a + b;
     }
     int resta(int a, int b) {
          return a - b;
     }
}

// Otro namespace llamado 'utils'
namespace utils {
     void imprimir(const std::string& mensaje) {
          std::cout << mensaje << std::endl;
     }
}

// Supongamos que tienes otro namespace con una función imprimir
namespace library {
    void imprimir(const std::string& mensaje) {
        std::cout << "[library] " << mensaje << std::endl;
    }
}

int main() {
    // Acceso usando el nombre completo del namespace
    int resultado1 = math::suma(5, 3);
    int resultado2 = math::resta(10, 4);
    
    // Usando 'using' para evitar escribir el nombre del namespace
    using utils::imprimir;
    // Usando el namespace 'std' para evitar tener que escribir std:: cada vez
    using namespace std;
    imprimir("Resultado de suma: " + to_string(resultado1));
    imprimir("Resultado de resta: " + to_string(resultado2));

    // Para evitar ambigüedad, llama explícitamente a la función del namespace 'library'.
    // Por tanto, una vez que has usado 'using', puedes llamar directamente a 'imprimir' de 'utils'.
    // Si quieres llamar a la función 'imprimir' de 'library', debes especificar
    library::imprimir("Este mensaje usa imprimir de 'otro' namespace");

    return 0;
}

/*
Resumen:
- Los namespaces ayudan a organizar el código y evitar conflictos de nombres.
- Se accede a sus elementos usando el operador '::'.
- Se puede usar 'using' para facilitar el acceso a los elementos del namespace.
*/