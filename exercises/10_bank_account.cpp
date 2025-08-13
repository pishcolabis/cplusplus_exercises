#include <iostream>
using namespace std;

// Variable global para el saldo de la cuenta
double balance = 0.0;

// Función para mostrar el saldo
void showBalance() {
    cout << "Saldo actual: $" << balance << endl;
}

// Función para depositar dinero
void depositMoney() {
    double amount;
    cout << "Ingrese la cantidad a depositar: $";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Se depositó $" << amount << " con éxito." << endl;
    } else {
        cout << "Cantidad inválida." << endl;
    }
}

// Función para retirar dinero
void withdrawMoney() {
    double amount;
    cout << "Ingrese la cantidad a retirar: $";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Se retiró $" << amount << " con éxito." << endl;
    } else if (amount > balance) {
        cout << "Fondos insuficientes." << endl;
    } else {
        cout << "Cantidad inválida." << endl;
    }
}

int main() {
    int option;
    do {
        cout << "\nMenú de Cuenta Bancaria:\n";
        cout << "1. Mostrar Saldo\n";
        cout << "2. Depositar Dinero\n";
        cout << "3. Retirar Dinero\n";
        cout << "4. Salir\n";
        cout << "Elija una opción: ";
        cin >> option;

        switch (option) {
            case 1:
                showBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Try again." << endl;
        }
    } while (option != 4);

    return 0;
}