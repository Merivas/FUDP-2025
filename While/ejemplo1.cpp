#include <iostream>
using namespace std;

int main() {
    int contador,n ;
    cout << "Ingrese un número para iniciar el contador: ";
    cin >> contador ; 
    cin >> n;
    // Ciclo while
    while (contador <= n) {
        cout << "Contador en while: " << contador << endl;
        contador++; // Incrementa el contador
    }

    return 0;
}