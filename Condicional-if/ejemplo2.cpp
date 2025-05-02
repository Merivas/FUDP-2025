/*
    ============================================================================
    ENUNCIADO DEL PROGRAMA:
    ----------------------------------------------------------------------------
    Este programa solicita al usuario que ingrese un número entero.

    Una vez recibido el número, el programa determina si dicho número es **par**
    o **impar** utilizando el operador módulo (%), y muestra un mensaje en consola
    con el resultado.

    Además, se utiliza '\a' para emitir un sonido (beep) si el número es par.

    Objetivos:
    - Reforzar el uso de condicionales (if-else).
    - Utilizar el operador módulo para detectar paridad.
    - Manejar entrada y salida por consola.
    - Usar secuencias de escape como \a (beep sonoro).

    Autor: Miguel Rivas
    ============================================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    // Solicita al usuario que ingrese un número entero
    cout << "Enter an integer number: ";
    cin >> n;

    // Verifica si el número es par usando el operador módulo
    if (n % 2 == 0)
    {
        // Si es par, muestra el mensaje e incluye un sonido (beep)
        cout << "\aThe number entered is " << n << " ... it is even." << endl;
    }
    else
    {
        // Si es impar, muestra otro mensaje
        cout << "The number entered is " << n << " ... it is odd." << endl;
    }

    return 0;
}
