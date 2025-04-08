
#include <iostream>
using namespace std;

int main() {
int matriz[3][3]; // Matriz de enteros con 3 filas y 3 columnas

int matriz2[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

cout << matriz2[2][2]<<endl; // Accede e imprime el elemento en la fila 0, columna 1

// Accede e imprime el elemento en la fila n, columna n
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matriz2[i][j] << " ";
    }
    cout << endl;
}

}