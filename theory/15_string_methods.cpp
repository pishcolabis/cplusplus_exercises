#include <iostream>
#include <string>

int main() {
    std::string texto = "Hola";

    // empty(): verifica si el string está vacío
    if (texto.empty()) {
        std::cout << "El string está vacío.\n";
    } else {
        std::cout << "El string NO está vacío: " << texto << "\n";
    }

    // append(): agrega texto al final del string
    texto.append(" Mundo");
    std::cout << "Después de append: " << texto << "\n";

    // at(): accede al carácter en una posición específica
    std::cout << "Carácter en la posición 1: " << texto.at(1) << "\n";

    // insert(): inserta texto en una posición específica
    texto.insert(5, " hermoso");
    std::cout << "Después de insert: " << texto << "\n";

    // find(): busca una subcadena y retorna la posición
    size_t pos = texto.find("hermoso");
    if (pos != std::string::npos) {
        std::cout << "\"hermoso\" encontrado en la posición: " << pos << "\n";
    } else {
        std::cout << "\"hermoso\" no encontrado\n";
    }

    // erase(): elimina parte del string
    texto.erase(5, 8); // elimina " hermoso"
    std::cout << "Después de erase: " << texto << "\n";

    // clear(): elimina todo el contenido del string
    texto.clear();
    std::cout << "Después de clear, ¿está vacío?: " << (texto.empty() ? "Sí" : "No") << "\n";

    return 0;
}