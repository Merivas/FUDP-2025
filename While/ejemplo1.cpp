#include <iostream>
using namespace std;

int main() {
    int contador ;
    cin >> contador ; //1
    // Ciclo while
    while (contador <= 5) {
        cout << "Contador en while: " << contador << endl;
        contador++; // Incrementa el contador
    }

    return 0;
}