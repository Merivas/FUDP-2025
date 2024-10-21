#include <iostream>
using namespace std;

// Prototipos de las funciones con parámetros
void sumar(int a, int b);
void restar(int a, int b);
void multiplicar(int a, int b);
void dividir(int a, int b);
void mostrarMenu();

int main() {
    int opcion, num1, num2;
    
    do {
        mostrarMenu();
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if(opcion >= 1 && opcion <= 4) {
            cout << "Ingrese dos números: ";
            cin >> num1 >> num2;
        }

        switch(opcion) {
            case 1:
                sumar(num1, num2);
                break;
            case 2:
                restar(num1, num2);
                break;
            case 3:
                multiplicar(num1, num2);
                break;
            case 4:
                dividir(num1, num2);
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
        cout << endl;
    } while(opcion != 5);

    return 0;
}

// Función que muestra el menú
void mostrarMenu() {
    cout << "===== Menú Principal =====" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Salir" << endl;
}

// Función para sumar dos números
void sumar(int a, int b) {
    cout << "La suma es: " << a + b << endl;
}

// Función para restar dos números
void restar(int a, int b) {
    cout << "La resta es: " << a - b << endl;
}

// Función para multiplicar dos números
void multiplicar(int a, int b) {
    cout << "El producto es: " << a * b << endl;
}

// Función para dividir dos números
void dividir(int a, int b) {
    if (b != 0) {
        cout << "La división es: " << a / b << endl;
    } else {
        cout << "Error: No se puede dividir entre cero." << endl;
    }
}
