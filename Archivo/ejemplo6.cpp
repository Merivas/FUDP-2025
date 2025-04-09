#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Personaje {
    string nombre;
    int nivel;
    int vida;
    int experiencia;
    int fuerza;
};

// Función para guardar los datos del personaje en un archivo
void guardarPartida(const Personaje& personaje) {
    ofstream archivo("partida_guardada.txt");
    if (archivo.is_open()) {
        archivo << personaje.nombre << endl;
        archivo << personaje.nivel << endl;
        archivo << personaje.vida << endl;
        archivo << personaje.experiencia << endl;
        archivo << personaje.fuerza << endl;
        archivo.close();
        cout << "Partida guardada exitosamente.\n";
    } else {
        cout << "No se pudo guardar la partida.\n";
    }
}

// Función para cargar los datos del personaje desde un archivo
bool cargarPartida(Personaje& personaje) {
    ifstream archivo("partida_guardada.txt");
    if (archivo.is_open()) {
        getline(archivo, personaje.nombre);
        archivo >> personaje.nivel;
        archivo >> personaje.vida;
        archivo >> personaje.experiencia;
        archivo >> personaje.fuerza;
        archivo.close();
        return true;
    }
    return false;
}

// Función para mostrar las estadísticas del personaje
void mostrarEstadisticas(const Personaje& personaje) {
    cout << "\n=== Estadísticas del Personaje ===\n";
    cout << "Nombre: " << personaje.nombre << endl;
    cout << "Nivel: " << personaje.nivel << endl;
    cout << "Vida: " << personaje.vida << endl;
    cout << "Experiencia: " << personaje.experiencia << endl;
    cout << "Fuerza: " << personaje.fuerza << endl;
    cout << "==================================\n";
}

// Función para simular un combate
void combate(Personaje& personaje) {
    srand(time(0));
    int vidaEnemigo = 20 + rand() % 20; // Vida aleatoria del enemigo entre 20 y 40
    int fuerzaEnemigo = 5 + rand() % 10; // Fuerza aleatoria del enemigo entre 5 y 15

    cout << "\n¡Ha aparecido un enemigo con " << vidaEnemigo << " puntos de vida y " 
         << fuerzaEnemigo << " de fuerza!\n";

    while (personaje.vida > 0 && vidaEnemigo > 0) {
        // El personaje ataca primero
        vidaEnemigo -= personaje.fuerza;
        cout << personaje.nombre << " ataca y reduce la vida del enemigo a " << vidaEnemigo << " puntos.\n";

        if (vidaEnemigo <= 0) {
            cout << "¡Has derrotado al enemigo!\n";
            personaje.experiencia += 10;
            if (personaje.experiencia >= 30) {  // Subir de nivel cada 30 puntos de experiencia
                personaje.nivel++;
                personaje.vida += 10;
                personaje.fuerza += 2;
                personaje.experiencia = 0;
                cout << "¡Has subido al nivel " << personaje.nivel << "! Vida y fuerza aumentadas.\n";
            }
            mostrarEstadisticas(personaje);
            return;
        }

        // El enemigo contraataca
        personaje.vida -= fuerzaEnemigo;
        cout << "El enemigo ataca y reduce tu vida a " << personaje.vida << " puntos.\n";

        if (personaje.vida <= 0) {
            cout << "Has sido derrotado por el enemigo. Fin del juego.\n";
            return;
        }
    }
}

// Función principal del juego
int main() {
    Personaje personaje;
    char opcion;

    cout << "Bienvenido al juego de rol RPG\n";
    cout << "¿Deseas cargar tu partida anterior? (s/n): ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') {
        if (cargarPartida(personaje)) {
            cout << "Partida cargada exitosamente.\n";
            mostrarEstadisticas(personaje);
        } else {
            cout << "No se encontró una partida guardada. Creando un nuevo personaje.\n";
            cout << "Ingresa el nombre de tu personaje: ";
            cin >> personaje.nombre;
            personaje.nivel = 1;
            personaje.vida = 50;
            personaje.experiencia = 0;
            personaje.fuerza = 10;
            mostrarEstadisticas(personaje);
        }
    } else {
        cout << "Ingresa el nombre de tu personaje: ";
        cin >> personaje.nombre;
        personaje.nivel = 1;
        personaje.vida = 50;
        personaje.experiencia = 0;
        personaje.fuerza = 10;
        mostrarEstadisticas(personaje);
    }

    // Bucle de juego
    while (personaje.vida > 0) {
        cout << "\n¿Qué deseas hacer?\n";
        cout << "1. Luchar contra un enemigo\n";
        cout << "2. Guardar partida\n";
        cout << "3. Ver estadísticas\n";
        cout << "4. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == '1') {
            combate(personaje);
        } else if (opcion == '2') {
            guardarPartida(personaje);
        } else if (opcion == '3') {
            mostrarEstadisticas(personaje);
        } else if (opcion == '4') {
            cout << "Saliendo del juego. ¡Hasta luego!\n";
            break;
        } else {
            cout << "Opción no válida. Inténtalo de nuevo.\n";
        }
    }

    return 0;
}
