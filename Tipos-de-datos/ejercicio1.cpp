#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Operaciones aritméticas
    int suma = a + b;
    int diferencia = a - b;
    int producto = a * b;
    int division = a / b;

    // Mostrar resultados
    cout << "Suma: " << suma << endl;
    cout << "Diferencia: " << diferencia << endl;
    cout << "Producto: " << producto << endl;
    cout << "Division entera: " << division << endl;

    // Operaciones lógicas y de comparación
    bool ambosPositivos = a > 0 && b > 0;
    bool algunoMayor100 = a > 100 || b > 100;
    bool sonIguales = a == b;
    bool noDiferentes = !(a != b);


    cout << "Ambos son positivos: " << ambosPositivos << endl;
    cout << "Al menos uno es mayor que 100: " << algunoMayor100 << endl;
    cout << "Los dos son iguales: " << sonIguales << endl;
    cout << "No son diferentes: " << noDiferentes << endl;

    return 0;
}
