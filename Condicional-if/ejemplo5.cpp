/*
    ============================================================================
    ENUNCIADO DEL PROGRAMA:
    ----------------------------------------------------------------------------
    Este programa solicita al usuario que ingrese la temperatura del agua en grados
    Celsius, y luego determina si el agua está **fría**, **templada** o **caliente**.

    Utiliza estructuras condicionales `if`, `else if` y `else` para comparar el
    valor de la temperatura e imprimir un mensaje adecuado en la consola.

    Objetivos:
    - Aplicar condicionales para comparar valores.
    - Trabajar con entrada de datos en punto flotante.
    - Desarrollar lógica de control básica.

    Nota: El código que está comentado debe ser descomentado para que funcione correctamente.
    Autor: Miguel Rivas
    ============================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    double celsius;

    // Solicita la temperatura del agua en grados Celsius
    cout << "Please enter the temperature of the water in Celsius: " << endl;
    cin >> celsius;

    // Verifica si el agua está fría
    if (celsius <= 15)
    {
        cout << "The water is cold." << endl;
    }
    // Verifica si el agua está templada
    else if (celsius >= 15 && celsius < 25)
    {
        cout << "The water is lukewarm." << endl;
    }
    // Si la temperatura es mayor o igual a 25, el agua está caliente
    else if (celsius >= 25)
    {
        cout << "The water is hot." << endl;
    }
    // Si la entrada no es válida
    else
    {
        cout << "I don't know what data you are giving me." << endl;
    }

    return 0;
}
