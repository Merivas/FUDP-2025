#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_JUGADORES = 10; // Máximo número de jugadores que almacenaremos

// Estructura para almacenar los nombres y puntajes de los jugadores
struct Jugador {
    string nombre;
    int puntaje;
};

// Función para mostrar una carta
void mostrarCarta(int carta) {
    if (carta == 1) {
        cout << "[A]";
    } else if (carta == 11) {
        cout << "[J]";
    } else if (carta == 12) {
        cout << "[Q]";
    } else if (carta == 13) {
        cout << "[K]";
    } else {
        cout << "[" << carta << "]";
    }
}

// Función para obtener una carta aleatoria
int obtenerCarta() {
    return rand() % 13 + 1; // Números de 1 a 13 representando las cartas
}

// Función para calcular el puntaje de una carta
int puntajeCarta(int carta) {
    if (carta > 10) {
        return 10; // J, Q, K valen 10 puntos
    } else {
        return carta; // Las demás cartas valen su valor
    }
}

// Función para jugar una partida y devolver el puntaje
int jugarMano() {
    int puntaje = 0;
    char opcion;

    cout << "Tus cartas: ";
    while (true) {
        int carta = obtenerCarta();
        puntaje += puntajeCarta(carta);
        mostrarCarta(carta);
        cout << " (Puntaje: " << puntaje << ")\n";

        if (puntaje >= 21) break;

        cout << "¿Deseas tomar otra carta? (s/n): ";
        cin >> opcion;
        if (opcion == 'n' || opcion == 'N') break;
    }

    return puntaje;
}

// Función para guardar puntajes en un archivo
void guardarPuntajes(Jugador jugadores[], int numJugadores) {
    ofstream archivo("puntajes.txt");
    if (archivo.is_open()) {
        for (int i = 0; i < numJugadores; ++i) {
            archivo << jugadores[i].nombre << " " << jugadores[i].puntaje << endl;
        }
        archivo.close();
        cout << "Puntajes guardados correctamente.\n";
    } else {
        cout << "No se pudo guardar los puntajes.\n";
    }
}

// Función para cargar puntajes desde un archivo
int cargarPuntajes(Jugador jugadores[]) {
    ifstream archivo("puntajes.txt");
    int numJugadores = 0;
    if (archivo.is_open()) {
        while (archivo >> jugadores[numJugadores].nombre >> jugadores[numJugadores].puntaje) {
            numJugadores++;
            if (numJugadores >= MAX_JUGADORES) break;
        }
        archivo.close();
    }
    return numJugadores;
}

// Función para mostrar el top 5 de jugadores
void mostrarTop5(Jugador jugadores[], int numJugadores) {
    cout << "\n--- Top 5 Puntajes ---\n";
    for (int i = 0; i < numJugadores && i < 5; ++i) {
        cout << i + 1 << ". " << jugadores[i].nombre << " - " << jugadores[i].puntaje << endl;
    }
}

// Función para jugar una partida contra la máquina
void jugarContraMaquina() {
    string nombreJugador;
    cout << "Ingresa tu nombre: ";
    cin >> nombreJugador;

    srand(time(0));

    cout << "\n--- Tu turno ---\n";
    int puntajeJugador = jugarMano();
    cout << "Puntaje final del jugador: " << puntajeJugador << endl;

    cout << "\n--- Turno de la máquina ---\n";
    int puntajeMaquina = 0;
    while (puntajeMaquina < 17) { // La máquina toma cartas hasta llegar a 17 o más
        int carta = obtenerCarta();
        puntajeMaquina += puntajeCarta(carta);
        mostrarCarta(carta);
        cout << " (Puntaje máquina: " << puntajeMaquina << ")\n";
    }
    cout << "Puntaje final de la máquina: " << puntajeMaquina << endl;

    // Determinar el ganador y asignar puntaje
    int puntajeFinal = 0;
    if ((puntajeJugador > puntajeMaquina && puntajeJugador <= 21) || puntajeMaquina > 21) {
        cout << "¡Felicidades, ganaste!\n";
        puntajeFinal = puntajeJugador;
    } else if (puntajeJugador == puntajeMaquina) {
        cout << "Es un empate.\n";
        puntajeFinal = puntajeJugador;
    } else {
        cout << "Lo siento, perdiste contra la máquina.\n";
    }

    // Cargar y actualizar puntajes
    Jugador jugadores[MAX_JUGADORES];
    int numJugadores = cargarPuntajes(jugadores);

    // Agregar el nuevo jugador
    if (numJugadores < MAX_JUGADORES) {
        jugadores[numJugadores] = {nombreJugador, puntajeFinal};
        numJugadores++;
    } else {
        cout << "Lista de puntajes llena. No se puede agregar más jugadores.\n";
    }

    // Ordenar puntajes de mayor a menor usando `sort`
    for (int i = 0; i < numJugadores - 1; ++i) {
        for (int j = i + 1; j < numJugadores; ++j) {
            if (jugadores[i].puntaje < jugadores[j].puntaje) {
                swap(jugadores[i], jugadores[j]);
            }
        }
    }

    // Guardar y mostrar top 5
    guardarPuntajes(jugadores, numJugadores);
    mostrarTop5(jugadores, numJugadores);
}

int main() {
    char opcion;
    cout << "Bienvenido al juego de 21 contra la máquina\n";
    cout << "1. Jugar\n";
    cout << "2. Salir\n";
    cout << "Selecciona una opción: ";
    cin >> opcion;

    if (opcion == '1') {
        jugarContraMaquina();
    } else {
        cout << "Gracias por jugar. ¡Hasta luego!\n";
    }

    return 0;
}
