#include <iostream>
using namespace std;

// Función que calcula el factorial de un número
int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero = 5;
    cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
    return 0;
}
