#include <iostream>
#include <cmath> // Necesaria para la función pow()

using namespace std;

int main() {
    double num1, num2;
    int opcion;

    cout << "--- Calculadora Avanzada ---" << endl;
    cout << "1. Suma (+)" << endl;
    cout << "2. Resta (-)" << endl;
    cout << "3. Multiplicacion (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exponenciacion (^)" << endl;
    cout << "6. Modulo (%)" << endl;
    
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (opcion) {
        case 1:
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "Error: Division por cero." << endl;
            break;
        case 5:
            // pow(base, exponente) de la libreria cmath
            cout << "Resultado: " << pow(num1, num2) << endl;
            break;
        case 6:
            // El modulo (%) solo funciona con enteros en C++
            cout << "Resultado: " << pmod(num1,num2) << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }

    return 0;
}