#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 42;  // El número que debe adivinar el usuario
    int intento;
    
    cout << "¡Adivina el número secreto!" << endl;
    cout << "Ingresa un número entre 1 y 100: ";

    // Ciclo while para continuar hasta que el usuario adivine correctamente
    cin >> intento;
    while (intento != numeroSecreto) {
        if (intento > numeroSecreto) {
            cout << "El número es demasiado alto. Inténtalo de nuevo: ";
        } else {
            cout << "El número es demasiado bajo. Inténtalo de nuevo: ";
        }
        cin >> intento;  // Leer un nuevo intento
    }

    cout << "¡Felicidades! Has adivinado el número secreto." << endl;
    return 0;
}