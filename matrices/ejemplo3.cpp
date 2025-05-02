#include <iostream>
using namespace std;

int main() {
    const int MAX_FILAS = 10;
    const int MAX_COLUMNAS = 10;
    int filas, columnas;

    // Declaración de una matriz de tamaño fijo
    int matriz[MAX_FILAS][MAX_COLUMNAS];

    // Solicitar el tamaño efectivo de la matriz dentro del límite
    cout << "Ingrese el número de filas (máximo " << MAX_FILAS << "): ";
    cin >> filas;
    cout << "Ingrese el número de columnas (máximo " << MAX_COLUMNAS << "): ";
    cin >> columnas;

    // Verificar que el tamaño sea válido
    if (filas > MAX_FILAS || columnas > MAX_COLUMNAS) {
        cout << "Error: tamaño excede el límite permitido." << endl;
        return 1;
    }

    // Llenado de la matriz por parte del usuario
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Imprimir la matriz
    cout << "La matriz ingresada es:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
