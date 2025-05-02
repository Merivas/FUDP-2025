#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    // Mostrar el menú de opciones
    cout << "--------------------------------------" << endl;
    cout << "Calculator Menu" << endl;
    cout << "--------------------------------------" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    // Verificar si la opción seleccionada es válida
    if (choice < 1 || choice > 5) {
        cout << "Invalid choice. Please select a number between 1 and 5." << endl;
        return 1; // Salir si la opción es incorrecta
    }

    // Solicitar los números si la opción es válida
    if (choice != 5) {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    // Usar el switch para seleccionar la operación
    switch (choice) {
        case 1:  // Sumar
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:  // Restar
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:  // Multiplicar
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:  // Dividir
            if (num2 != 0) {  // Verificar si el divisor no es cero
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        case 5:  // Salir
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    return 0;
}
