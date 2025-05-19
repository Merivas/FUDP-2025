#include <iostream>
using namespace std;

int main() {
    int numeros[5],n; // Declaración del arreglo
    cout << "digite el numero del tamano del arreglo:" << endl;
    // Pedir al usuario que ingrese valores
    cout << "Ingrese 5 números:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Mostrar los números ingresados
    cout << "Números ingresados:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": " << numeros[i] << endl;
    }

    return 0;

}
