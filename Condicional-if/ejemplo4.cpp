/*
    ============================================================================
    ENUNCIADO DEL PROGRAMA:
    ----------------------------------------------------------------------------
    Este programa solicita al usuario que ingrese un número entero y determina
    si el número ingresado es **positivo**, **negativo** o **cero**.

    El programa utiliza estructuras condicionales `if`, `else if` y `else`
    para comparar el valor del número e imprimir un mensaje adecuado.

    Objetivos:
    - Reforzar el uso de condicionales múltiples.
    - Trabajar con entrada de datos desde teclado.
    - Desarrollar lógica de control básica.

    Nota: El mensaje para número positivo contiene un texto irrelevante
    ("asdasdasdasdasdasdas"), se recomienda corregir para mayor claridad.

    Autor: Miguel Rivas
    ============================================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int number;

    // Solicita al usuario que ingrese un número
    cout << "Enter a number: ";
    cin >> number;

    // Verifica si el número es igual a cero
    if (number == 0)
    {
        cout << "Your number is zero." << endl;
    }
    // Verifica si el número es negativo
    else if (number < 0)
    {
        cout << "Your number is negative." << endl;
    }
    // En caso contrario, el número es positivo
    else
    {
        cout << "Your number is positive." << endl;
    }

    return 0;
}
