#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables para almacenar los números, la operación y el resultado
    float num1, num2, resultado;
    int opcion;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Mostrar el menú de opciones para elegir la operación matemática
    cout << "Seleccione una operación:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicación" << endl;
    cout << "4. División" << endl;
    cout << "5. Salir" << endl;
    cout << "Opción: ";
    cin >> opcion;

    // Verificar si la opción seleccionada es válida
    if (opcion < 1 || opcion > 5)
    {
        cout << "Opción no válida. Por favor, elija una opción del 1 al 5." << endl;
        return 1; // Salida temprana del programa si la opción no es válida
    }

    // Usar un switch para realizar la operación matemática según la elección del usuario
    switch (opcion)
    {
    case 1: // Suma
        resultado = num1 + num2;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;
    case 2: // Resta
        resultado = num1 - num2;
        cout << "El resultado de la resta es: " << resultado << endl;
        break;
    case 3: // Multiplicación
        resultado = num1 * num2;
        cout << "El resultado de la multiplicación es: " << resultado << endl;
        break;
    case 4: // División
        // Verificar si el segundo número es cero antes de realizar la división
        if (num2 != 0)
        {
            resultado = num1 / num2;
            cout << "El resultado de la división es: " << resultado << endl;
        }
        else
        {
            cout << "Error: División por cero no permitida." << endl;
            return 1; // Salida temprana del programa si se intenta dividir por cero
        }
        break;
    case 5: // Salir
        cout << "Saliendo del programa. ¡Hasta luego!" << endl;
        return 0;
        break;
    default:
        cout << "Opción no válida. Por favor, elija una opción del 1 al 5." << endl;
        return 1; // Salida temprana del programa si la opción no es válida
    }

    // Usar if-else para verificar si el resultado es positivo, negativo o cero
    if (resultado > 0)
    {
        cout << "El resultado es positivo." << endl;
    }
    else if (resultado < 0)
    {
        cout << "El resultado es negativo." << endl;
    }
    else
    {
        cout << "El resultado es cero." << endl;
    }

    return 0; // Fin del programa
}
