/*
    ============================================================================
    ENUNCIADO DEL PROGRAMA:
    ----------------------------------------------------------------------------
    Este programa solicita al usuario que ingrese un número entero.

    A partir del número ingresado 'y', se calcula el valor de 'x' como y elevado
    a la potencia de y (es decir, x = y^y). Luego, el programa determina si el
    número resultante x es par o impar y muestra el resultado en pantalla.

    Además, el código incluye un bloque comentado que, si se activa, también
    informa si el número ingresado originalmente (y) es positivo o negativo.

    Objetivos:
    - Usar funciones matemáticas (pow).
    - Aplicar operadores de módulo para determinar par/impar.
    - Introducir condicionales y entrada/salida por consola.

    Autor: Miguel Rivas
    ============================================================================
*/

#include <iostream>
#include <cmath> // Para utilizar la función pow

using namespace std;

int main()
{
    int y, x;

    // Solicita al usuario un número
    cout << "Please enter a number:" << endl;
    cin >> y;

    // Calcula x = y^y
    x = pow(y, y);

    // Determina si x es par o impar
    if (x % 2 == 0)
    {
        cout << "The number: " << x << " is even." << endl;
    }
    else
    {
        cout << "The number: " << x << " is odd." << endl;
    }

    /*
    // Bloque adicional para determinar si y es positivo o negativo
    if (y < 0) {
        cout << "The number: " << y << " is negative." << endl;
    } else {
        cout << "The number: " << y << " is positive." << endl;
    }
    */

    return 0;
}
