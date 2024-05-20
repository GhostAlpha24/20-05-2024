#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicializa el generador de números aleatorios
    srand(time(0));

    string opciones[] = {"Piedra", "Papel", "Tijeras"};
    int eleccionJugador1;
    int eleccionJugador2 = rand() % 3;

    cout << "Juego de Piedra, Papel, Tijeras\n";
    cout << "Elige tu opción:\n";
    cout << "0: Piedra\n";
    cout << "1: Papel\n";
    cout << "2: Tijeras\n";
    cout << "Tu elección: ";
    cin >> eleccionJugador1;

    // Verificar que la entrada del jugador 1 sea válida
    if (eleccionJugador1 < 0 || eleccionJugador1 > 2) {
        cout << "Elección no válida. Por favor elige 0, 1 o 2.\n";
        return 1;
    }

    cout << "Jugador 1 elige: " << opciones[eleccionJugador1] << endl;
    cout << "Jugador 2 (CPU) elige: " << opciones[eleccionJugador2] << endl;

    // Determinar el ganador
    if (eleccionJugador1 == eleccionJugador2) {
        cout << "Es un empate!\n";
    } else if ((eleccionJugador1 == 0 && eleccionJugador2 == 2) || 
               (eleccionJugador1 == 1 && eleccionJugador2 == 0) || 
               (eleccionJugador1 == 2 && eleccionJugador2 == 1)) {
        cout << "Jugador 1 gana!\n";
    } else {
        cout << "Jugador 2 (CPU) gana!\n";
    }

    return 0;
}
