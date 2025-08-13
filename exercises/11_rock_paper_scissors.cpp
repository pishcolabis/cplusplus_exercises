#include <iostream>
#include <string>

using namespace std;

string getComputerChoice() {
    int num = rand() % 3;
    if (num == 0) return "piedra";
    if (num == 1) return "papel";
    return "tijeras";
}

string getPlayerChoice() {
    string choice;
    cout << "Elige piedra, papel o tijeras: ";
    cin >> choice;
    // Normaliza la entrada convirtiéndola a minúsculas
    for (size_t i = 0; i < choice.size(); ++i) {
        choice[i] = tolower(choice[i]);
    }
    if (choice != "piedra" && choice != "papel" && choice != "tijeras") {
        cout << "Opción inválida. Inténtalo de nuevo.\n";
        return getPlayerChoice();
    }
    return choice;
}

int determineWinner(string player, string computer) {
    if (player == computer) return 0; // Empate
    if ((player == "piedra" && computer == "tijeras") ||
        (player == "papel" && computer == "piedra") ||
        (player == "tijeras" && computer == "papel")) {
        return 1; // Gana jugador
    }
    return -1; // Gana computadora
}

void playGame() {
    int playerScore = 0, computerScore = 0;
    int rounds = 1;

    cout << "¡Bienvenido al juego de Piedra, Papel o Tijeras!\n";
    cout << "El primer jugador en ganar 3 rondas gana el juego.\n";

    while (playerScore < 3 && computerScore < 3) {
        cout << "\n--- Ronda " << rounds << " ---\n";
        if (playerScore != 0 || computerScore != 0) {
            cout << "Jugador: " << playerScore << " | Máquina: " << computerScore << endl;
        }
        string player = getPlayerChoice();
        string computer = getComputerChoice();
        cout << "La máquina eligió: " << computer << endl;
        int result = determineWinner(player, computer);
        if (result == 1) {
            cout << "¡Ganaste esta ronda!\n";
            playerScore++;
        } else if (result == -1) {
            cout << "La máquina gana esta ronda.\n";
            computerScore++;
        } else {
            cout << "Empate.\n";
        }
        rounds++;
    }

    cout << "\nResultado final: ";
    if (playerScore > computerScore)
        cout << "¡Ganaste el juego!\n";
    else if (computerScore > playerScore)
        cout << "La máquina ganó el juego.\n";
    else
        cout << "Empate en el juego.\n";
}

int main() {
    srand(time(NULL)); // Inicializa la semilla aleatoria
    playGame();
    return 0;
}