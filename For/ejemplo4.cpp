#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
       
        // En cada línea imprimimos 'i' asteriscos
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // Salto de línea después de cada fila
    }

    return 0;
}
