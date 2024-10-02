#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 42;  // El número que debe adivinar el usuario
    int intento;
    
    cout << "¡Adivina el número secreto!" << endl;

    // Ciclo do-while que siempre pedirá al menos un intento
    do {
        cout << "Ingresa un número entre 1 y 100: ";
        cin >> intento;

        if (intento > numeroSecreto) {
            cout << "El número es demasiado alto. Inténtalo de nuevo." << endl;
        } else if (intento < numeroSecreto) {
            cout << "El número es demasiado bajo. Inténtalo de nuevo." << endl;
        }

    } while (intento != numeroSecreto);

    cout << "¡Felicidades! Has adivinado el número secreto." << endl;
    return 0;
}
