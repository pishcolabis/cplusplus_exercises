#include <iostream> // Incluye la biblioteca estándar para entrada/salida
#include <map> // Incluye la biblioteca para usar mapas (diccionarios)
#include <functional> // Incluye la biblioteca para usar funciones como objetos

using namespace std; // Permite usar los nombres estándar sin el prefijo std::

int main() {
    double num1; // Variable para el primer número
    double num2; // Variable para el segundo número
    int op; // Variable para la opción elegida por el usuario
    double result; // Variable para almacenar el resultado

    // Mapa que asocia cada opción con una función lambda que realiza la operación correspondiente
    // Se crea un mapa llamado 'opciones' que asocia cada número de opción con una función lambda.
    // Cada lambda realiza la operación correspondiente y modifica la variable 'result'.
    // El uso de [&] en la lambda indica que se capturan por referencia las variables externas,
    // permitiendo modificar 'result', 'num1' y 'num2' dentro de la lambda.

    // Una lambda es una función anónima que se puede definir en el lugar donde se usa.
    // En este caso, se usa para definir las operaciones de la calculadora de manera concisa.
    // El uso de [&] permite que la lambda acceda y modifique las variables
    // 'num1', 'num2' y 'result' directamente, sin necesidad de pasarlas como argumentos.
    // En caso de no incluir [&], las variables no podrían ser modificadas dentro de la lambda,
    // Es más, saltaría un error de compilación si se intentara acceder a ellas sin capturarlas adecuadamente.

    // Esto es útil para evitar la creación de funciones separadas para cada operación,
    // manteniendo el código más limpio y fácil de entender.
    // Las funciones lambda son una característica de C++11 y posteriores, y permiten crear funciones
    // de manera más flexible y concisa, especialmente en contextos donde se necesitan funciones pequeñas
    // y específicas, como en este caso para una calculadora simple.

    std::map<int, std::function<void()>> opciones = {
        {1, [&](){ result = num1 + num2;  }}, // Suma
        {2, [&](){ result = num1 - num2;  }}, // Resta
        {3, [&](){ result = num1 * num2;  }}, // Multiplicación
        {4, [&](){ result = num1 / num2;  }}  // División
    };

    cout<<"######## CALCULADORA ########\n";
    cout<<"¿Qué quieres hacer?\n\t1.Sumar\n\t2.Restar\n\t3.Multiplicar\n\t4.Dividir"<<endl;
    cout<<"Opción: ";
    cin>>op;cout<<endl;

    // Verifica si la opción es válida (existe en el mapa)
    if (!opciones.count(op)) {
        std::cout << "Opción no válida"; // Muestra mensaje de error si la opción no existe
        return 0; // Termina el programa
    }

    cout<<"Introduce el primer número: ";
    cin>>num1;cout<<endl;
    cout<<"Introduce el segundo número: ";
    cin>>num2;cout<<endl;

    opciones[op](); // Ejecuta la función correspondiente a la opción elegida

    cout<<"El resultado es: "<<result<<endl;


    return 0;
}