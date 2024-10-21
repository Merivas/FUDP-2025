#include <iostream>
using namespace std;

// Función que verifica si un número es par
bool esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int numero = 10;
    if (esPar(numero))
        cout << numero << " es par." << endl;
    else
        cout << numero << " es impar." << endl;
    return 0;
}
