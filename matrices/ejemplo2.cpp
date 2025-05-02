
#include <iostream>
using namespace std;

int main() {
int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
int suma = 0;

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        suma += matriz[i][j];
    }
}

cout << "La suma de todos los elementos es: " << suma << endl;

}

