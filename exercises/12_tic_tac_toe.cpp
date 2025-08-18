#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Definimos el tamaño del tablero de Tic-Tac-Toe
// En este caso, es un tablero de 3x3, por lo que SIZE es 3.
const int SIZE = 3;

/**
 * @brief Inicializa el tablero de Tic-Tac-Toe con espacios vacíos.
 *
 * Esta función recibe un puntero a un array de caracteres que representa el tablero
 * y lo llena con espacios (' '), indicando que todas las celdas están vacías.
 *
 * @param board Puntero a un array de caracteres que representa el tablero de Tic-Tac-Toe.
 *              Se espera que el tablero sea un array unidimensional de tamaño SIZE*SIZE.
 */
void initBoard(char *board) {
    for (int i = 0; i < SIZE * SIZE; ++i)
        board[i] = ' ';
}

/**
 * @brief Imprime el tablero de Tic-Tac-Toe en la consola.
 *
 * Esta función recibe un puntero a un array de caracteres que representa el tablero
 * y lo imprime en un formato legible.
 *
 * @param board Puntero a un array de caracteres que representa el tablero de Tic-Tac-Toe.
 *              Se espera que el tablero sea un array unidimensional de tamaño SIZE*SIZE.
 */
void printBoard(const char *board) {
    cout << "\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << " " << board[i * SIZE + j];
            if (j < SIZE - 1) cout << " |";
        }
        cout << "\n";
        if (i < SIZE - 1) cout << "---+---+---\n";
    }
    cout << "\n";
}

/**
 * @brief Verifica el estado actual del tablero de Tic-Tac-Toe para determinar si hay un ganador.
 *
 * Esta función examina el tablero proporcionado para determinar si existe un ganador.
 * Revisa todas las filas, columnas y ambas diagonales buscando tres caracteres iguales y distintos de espacio (' ').
 *
 * @param board Puntero a un array de caracteres que representa el tablero de Tic-Tac-Toe.
 *              Se espera que el tablero sea un array unidimensional de tamaño SIZE*SIZE.
 * @return El carácter que representa al ganador ('X' o 'O') si lo hay,
 *         o ' ' (espacio) si aún no hay ganador.
 */
char checkWinner(const char *board) {
    // Revisa las filas y columnas del tablero para encontrar un ganador.
    // Si encuentra tres caracteres iguales en una fila o columna, retorna ese carácter.
    // También revisa las dos diagonales del tablero.
    // Si no hay ganador, retorna un espacio (' ').
    for (int i = 0; i < SIZE; ++i) {
        if (board[i * SIZE] != ' ' &&
            board[i * SIZE] == board[i * SIZE + 1] &&
            board[i * SIZE + 1] == board[i * SIZE + 2])
            return board[i * SIZE];
        if (board[i] != ' ' &&
            board[i] == board[SIZE + i] &&
            board[SIZE + i] == board[2 * SIZE + i])
            return board[i];
    }
    if (board[0] != ' ' &&
        board[0] == board[4] &&
        board[4] == board[8])
        return board[0];
    if (board[2] != ' ' &&
        board[2] == board[4] &&
        board[4] == board[6])
        return board[2];
    return ' ';
}

/**
 * @brief Verifica si el tablero de Tic-Tac-Toe está lleno.
 *
 * Esta función revisa cada celda del tablero para determinar si todas las celdas están ocupadas.
 * Si al menos una celda está vacía (contiene un espacio ' '), el tablero no está lleno.
 *
 * @param board Puntero a un array de caracteres que representa el tablero de Tic-Tac-Toe.
 *              Se espera que el tablero sea un array unidimensional de tamaño SIZE*SIZE.
 * @return true si el tablero está lleno, false si hay al menos una celda vacía.
 */
bool isBoardFull(const char *board) {
    for (int i = 0; i < SIZE * SIZE; ++i)
        if (board[i] == ' ')
            return false;
    return true;
}

/**
 * @brief Realiza un movimiento en el tablero de Tic-Tac-Toe.
 *
 * Esta función intenta colocar un carácter (jugador) en una posición específica del tablero.
 * Si la posición es válida y está vacía, el movimiento se realiza; de lo contrario, se ignora.
 *
 * @param board Puntero a un array de caracteres que representa el tablero de Tic-Tac-Toe.
 *              Se espera que el tablero sea un array unidimensional de tamaño SIZE*SIZE.
 * @param row Fila donde se desea realizar el movimiento (0 a 2).
 * @param col Columna donde se desea realizar el movimiento (0 a 2).
 * @param player Carácter del jugador ('X' o 'O') que realiza el movimiento.
 * @return true si el movimiento fue exitoso, false si la posición es inválida o ya está ocupada.
 */
bool makeMove(char *board, int row, int col, char player) {
    // Verifica si la posición es válida y está vacía antes de realizar el movimiento.
    int idx = row * SIZE + col;
    if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[idx] != ' ')
        return false;
    // Realiza el movimiento colocando el carácter del jugador en la posición especificada.
    board[idx] = player;
    return true;
}

/**
 * @brief Realiza un movimiento de la máquina en el tablero de Tic-Tac-Toe.
 *
 * Esta función selecciona una celda vacía aleatoria en el tablero y coloca el carácter 'O' de la máquina.
 * Utiliza un array para almacenar las posiciones vacías y selecciona una al azar.
 *
 * @param board Puntero a un array de caracteres que representa el tablero de Tic-Tac-Toe.
 *              Se espera que el tablero sea un array unidimensional de tamaño SIZE*SIZE.
 */
void machineMove(char *board) {
    // Genera una lista de celdas vacías
    // y selecciona una al azar para colocar la 'O' de la máquina.
    int emptyCells[SIZE * SIZE][2];
    // Contamos las celdas vacías y las almacenamos en emptyCells
    // Cada celda se representa como un par de coordenadas (fila, columna).
    // La variable count se usa para llevar el conteo de celdas vacías.
    int count = 0;
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            // Si la celda está vacía, la agregamos a emptyCells
            // y aumentamos el contador.
            if (board[i * SIZE + j] == ' ') {
                emptyCells[count][0] = i;
                emptyCells[count][1] = j;
                ++count;
            }

    // Si la variable count es mayor que 0, significa que hay celdas vacías disponibles.
    // Seleccionamos una celda vacía al azar y realizamos el movimiento.
    if (count > 0) {
        int choice = rand() % count;
        makeMove(board, emptyCells[choice][0], emptyCells[choice][1], 'O');
    }
}

int main() {
    srand(time(0)); // Inicializa el generador de números aleatorios solo una vez
    char board[SIZE * SIZE];
    int playerTurn = rand() % 2; // Determina al azar quién comienza (0 para jugador, 1 para máquina)
    char currentPlayer = (playerTurn == 0) ? 'X' : 'O'; // 'X' para el jugador, 'O' para la máquina
    int row, col;
    // Inicializa el tablero antes de comenzar el juego
    initBoard(board);

    while (true) {
        // Imprime el tablero actual y verifica a quién le toca jugar.
        printBoard(board);
        if (currentPlayer == 'X') {
            cout << "Tu turno (X). Ingresa fila y columna (0-2): ";
            cin >> row >> col;
            if (!makeMove(board, row, col, currentPlayer)) {
                cout << "Movimiento inválido. Intenta de nuevo.\n";
                continue;
            }
        } else {
            cout << "Turno de la máquina (O)...\n";
            machineMove(board);
        }
        // Verifica si hay un ganador después de cada movimiento.
        char winner = checkWinner(board);

        // Si hay un ganador, imprime el tablero y anuncia al ganador.
        // Si el tablero está lleno y no hay ganador, anuncia un empate.
        if (winner != ' ') {
            printBoard(board);
            cout << "¡El jugador " << winner << " ha ganado!\n";
            break;
        }
        if (isBoardFull(board)) {
            printBoard(board);
            cout << "¡Empate!\n";
            break;
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
}