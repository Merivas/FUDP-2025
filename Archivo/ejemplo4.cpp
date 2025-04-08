#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // Para rand y srand
#include <ctime>   // Para time

using namespace std;

// Función para guardar el progreso en un archivo
void guardarPartida(int numeroAdivinar, int intentos) {
    ofstream archivo("partida.txt");
    if (archivo.is_open()) {
        archivo << numeroAdivinar << endl;
        archivo << intentos << endl;
        archivo.close();
        cout << "Partida guardada correctamente.\n";
    } else {
        cout << "No se pudo guardar la partida.\n";
    }
}

// Función para cargar una partida guardada desde un archivo
bool cargarPartida(int &numeroAdivinar, int &intentos) {
    ifstream archivo("partida.txt");
    if (archivo.is_open()) {
        archivo >> numeroAdivinar;
        archivo >> intentos;
        archivo.close();
        cout << "Partida cargada correctamente.\n";
        return true;
    } else {
        cout << "No se encontró una partida guardada.\n";
        return false;
    }
}

// Función para guardar el puntaje final en un archivo
void guardarPuntaje(int puntaje) {
    ofstream archivo("puntaje.txt");
    if (archivo.is_open()) {
        archivo << "Puntaje final: " << puntaje << " intentos." << endl;
        archivo.close();
        cout << "Puntaje guardado correctamente.\n";
    } else {
        cout << "No se pudo guardar el puntaje.\n";
    }
}

// Función para jugar el juego
void jugarJuego() {
    int numeroAdivinar, intentos = 0, intentoJugador;
    char opcion;

    // Intentar cargar partida anterior
    cout << "¿Deseas cargar una partida guardada? (s/n): ";
    cin >> opcion;
    if (opcion == 's' || opcion == 'S') {
        if (!cargarPartida(numeroAdivinar, intentos)) {
            cout << "Iniciando una nueva partida...\n";
            srand(time(0));
            numeroAdivinar = rand() % 100 + 1;
        }
    } else {
        srand(time(0));
        numeroAdivinar = rand() % 100 + 1;
    }

    // Loop del juego de adivinanza
    while (true) {
        cout << "Adivina el número (entre 1 y 100): ";
        cin >> intentoJugador;
        intentos++;

        if (intentoJugador == numeroAdivinar) {
            cout << "¡Correcto! Adivinaste el número en " << intentos << " intentos.\n";
            guardarPuntaje(intentos); // Guardar puntaje final
            break;
        } else if (intentoJugador < numeroAdivinar) {
            cout << "Demasiado bajo. Intenta de nuevo.\n";
        } else {
            cout << "Demasiado alto. Intenta de nuevo.\n";
        }

        // Opción para guardar y salir
        cout << "¿Deseas guardar la partida y salir? (s/n): ";
        cin >> opcion;
        if (opcion == 's' || opcion == 'S') {
            guardarPartida(numeroAdivinar, intentos);
            cout << "Partida guardada. ¡Hasta luego!\n";
            return;
        }
    }
}

int main() {
    char opcion;
    cout << "Bienvenido al juego de adivinanza\n";
    cout << "1. Jugar\n";
    cout << "2. Salir\n";
    cout << "Selecciona una opción: ";
    cin >> opcion;

    if (opcion == '1') {
        jugarJuego();
    } else {
        cout << "Gracias por jugar. ¡Hasta luego!\n";
    }

    return 0;
}
