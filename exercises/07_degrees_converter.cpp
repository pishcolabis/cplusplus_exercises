/*
Escribe un programa en C++ que permita al usuario convertir temperaturas entre grados Celsius y Fahrenheit.
El programa debe mostrar un menú donde el usuario pueda elegir:
1. Convertir de Celsius a Fahrenheit
2. Convertir de Fahrenheit a Celsius

Después de seleccionar la opción, el usuario debe ingresar la temperatura a convertir.
El programa debe mostrar el resultado de la conversión y permitir realizar nuevas conversiones hasta que el usuario decida salir.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    float temp;
    char op;

    cout<<"############ Conversor de termperatura ############\n";
    cout<<"¿A qué quieres convertir?\n\t* Opción C: Celsius\n\t* Opción F: Fahrenheit\n";
    cout<<"Opción: "; cin>>op; cout<<endl;

    if (op != 'c' && op != 'C' && op != 'F' && op != 'f') {
        cout<<"Opción no válida. Cierre de programa.";
        return 0;
    }

    bool isCelsiusConversion = op == 'c' || op == 'C';

    string conversionType = isCelsiusConversion ?  "Fahrenheit a Celsius" : "Celsius a Fahrenheit";

    cout<<"Estás haciendo una conversión de "<<conversionType<<endl;
    cout<<"Introduce la temperatura:"<<endl;
    cin>>temp;

    if (op == 'C' || op == 'c') {
        temp = (temp - 32) / 1.8;
    } else if (op == 'F' || op == 'f') {
        temp = (temp * 1.8) + 32;
    }

    string result = isCelsiusConversion ? "celsius" : "fahrenheit";

    cout<<"\nLa temperatura se ha convertido en: "<<temp<<"º "<<result;

    return 0;
}