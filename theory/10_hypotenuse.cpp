#include <iostream>
#include <cmath>
// std::hypot: Calcula la hipotenusa de un triángulo rectángulo dados los catetos.
// Buena práctica: Usar std::hypot para evitar errores de desbordamiento en cálculos de hipotenusa.

// std::hypot es una función que calcula la hipotenusa de un triángulo rectángulo dados los catetos.
// Para esta caso debemos usar las bibliotecas <iostream> y <cmath>.

/*
La hipotenusa (h) de un triángulo rectángulo se calcula usando el teorema de Pitágoras:
h = sqrt(cateto1^2 + cateto2^2)
*/

using namespace std;

int main () {
    // Declaramos las variables para almacenar la hipotenusa y los dos catetos
    float hipotenusa;
    float cateto1;
    float cateto2;

    // Solicitamos al usuario el primer cateto
    cout << "Introduza el primer lado:" << endl;
    cin >> cateto1;
    
    // Solicitamos al usuario el segundo cateto
    cout << "Introduza el segundo lado:" << endl;
    cin >> cateto2;

    // Elevamos ambos catetos al cuadrado usando pow
    cateto1 = pow(cateto1, 2);
    cateto2 = pow(cateto2, 2);

    // Sumamos los cuadrados y calculamos la raíz cuadrada para obtener la hipotenusa
    hipotenusa = sqrt(cateto1 + cateto2);

    // Mostramos el resultado al usuario
    cout << "Este es el resultado de la hipotenusa entre los catatos " << cateto1 << " y " << cateto2 << ": " << hipotenusa << endl;

    // Terminamos el programa
    return 0;
}