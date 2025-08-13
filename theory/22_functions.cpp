/*
    Este código muestra diferentes formas de declarar y utilizar funciones en C++:
    - Función simple sin argumentos ni valor de retorno.
    - Función con argumentos.
    - Función con valor de retorno.
    - Función con argumentos por defecto.
    - Función que utiliza argumentos por referencia.
    - Sobrecarga de funciones.

    Cada función está documentada individualmente a continuación.
*/

// Declaración de función simple
/**
 * @brief Imprime un saludo en pantalla.
 * 
 * Esta función no recibe argumentos ni retorna valores.
 * Es útil para mostrar mensajes fijos.
 */
void saludo();

// Declaración de función con argumentos
/**
 * @brief Muestra la suma de dos números enteros.
 * 
 * @param a Primer número entero.
 * @param b Segundo número entero.
 * 
 * Imprime el resultado de la suma de 'a' y 'b'.
 */
void mostrarSuma(int a, int b);

// Declaración de función con valor de retorno
/**
 * @brief Calcula el cuadrado de un número entero.
 * 
 * @param x Número entero a elevar al cuadrado.
 * @return int El cuadrado de 'x'.
 */
int cuadrado(int x);

// Declaración de función con argumentos por defecto
/**
 * @brief Muestra un mensaje en pantalla.
 * 
 * @param mensaje Mensaje a mostrar. Si no se proporciona, se usa "Mensaje por defecto".
 * 
 * Permite mostrar mensajes personalizados o un mensaje predeterminado.
 */
void mostrarMensaje(string mensaje = "Mensaje por defecto");

/**
 * @brief Incrementa el valor de una variable entera en uno.
 * 
 * @param n Referencia a la variable entera que se incrementará.
 * 
 * Utiliza paso por referencia para modificar el valor original.
 */
void incrementar(int &n);

// Declaración de función sobrecargada
/**
 * @brief Imprime un número entero en pantalla.
 * 
 * @param x Número entero a imprimir.
 */
void imprimir(int x);

/**
 * @brief Imprime un número de tipo double en pantalla.
 * 
 * @param x Número double a imprimir.
 */
void imprimir(double x);

/**
 * @brief Calcular el total de los precios a través de un array de precios.
 * 
 * @param precios Array de precios.
 * @return double El total de los precios.
 */
double calcularTotal(double precios[]);

// Inclusión de cabeceras necesarias
#include <iostream>
#include <string>
using namespace std;

// Definición de la función principal
int main() {
    // Ejemplo de uso de las funciones

    // Llamada a función simple
    saludo();

    // Llamada a función con argumentos
    mostrarSuma(3, 5);

    // Llamada a función con valor de retorno
    int valor = 4;
    cout << "El cuadrado de " << valor << " es " << cuadrado(valor) << endl;

    // Llamada a función con argumento por defecto y personalizado
    mostrarMensaje("Hola desde C++!");

    // Llamada a función con referencia
    int numero = 10;
    incrementar(numero);
    cout << "Numero incrementado: " << numero << endl;

    // Llamada a funciones sobrecargadas
    imprimir(7);
    imprimir(3.14);

    // Ejemplo de uso de un array de precios
    double precios[] = {10.5, 20.0, 30.75};
    double total = calcularTotal(precios);
    cout << "Total de precios: $" << total << endl;

    return 0;
}

// Implementación de las funciones
// Nota: La implementación de las funciones puede ir al mismo nivel que la declaración.
// De esta forma, se asegura que las funciones estén disponibles antes de su uso en main.
// Y no es necesario implementarlas desde el inicio del archivo.

void saludo() {
    // Imprime un saludo fijo
    cout << "¡Hola, bienvenido a la demostración de funciones en C++!" << endl;
}

void mostrarSuma(int a, int b) {
    // Imprime la suma de dos números
    cout << "La suma de " << a << " y " << b << " es " << (a + b) << endl;
}

int cuadrado(int x) {
    // Retorna el cuadrado de un número
    return x * x;
}

void mostrarMensaje(string mensaje) {
    // Imprime el mensaje recibido
    cout << mensaje << endl;
}

void incrementar(int &n) {
    // Incrementa el valor de la variable por referencia
    n++;
}

void imprimir(int x) {
    // Imprime un número entero
    cout << "Entero: " << x << endl;
}

void imprimir(double x) {
    // Imprime un número double
    cout << "Double: " << x << endl;
}

double calcularTotal(double precios[]) {
    // Calcula el total de los precios
    double total = 0.0;
    for (int i = 0; i < sizeof(precios) / sizeof(precios[0]); ++i) {
        total += precios[i];
    }
    return total;
}