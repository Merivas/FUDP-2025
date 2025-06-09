#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;

    // Solicitar al usuario un número entero N
    cout << "Ingresa un número entero: ";
    cin >> N;

    // Ciclo for para sumar los números desde 1 hasta N
    for (int i = 1; i <= N; i++) {
        suma += i;
        suma = suma + i; // Sumar el valor de i a la variable suma
    }

    // Imprimir el resultado de la suma
    cout << "La suma de los primeros " << N << " números es: " << suma << endl;

    return 0;
}
