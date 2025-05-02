/*
    ============================================================================
    ENUNCIADO DEL PROGRAMA:
    ----------------------------------------------------------------------------
    Este programa calcula el área de un círculo a partir del radio ingresado
    por el usuario.

    Utiliza una aproximación del valor de π (pi = 3) para realizar el cálculo
    con la fórmula: área = π * r^2.

    Luego, determina si el área calculada es un número par o impar, y muestra
    un mensaje correspondiente en la consola.

    Objetivos:
    - Aplicar la fórmula del área de un círculo.
    - Reforzar el uso de operadores aritméticos y condicionales.
    - Trabajar con entrada/salida estándar.
    - Introducir validaciones simples usando el operador módulo (%).

    Nota: El valor de π se ha simplificado a 3 para facilitar el cálculo con
    enteros. En aplicaciones reales se recomienda usar el valor más preciso
    de π (como 3.1416 o la constante M_PI de <cmath>).

    Autor: Miguel Rivas
    ============================================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int radius, pi = 3, area;

    // Mostrar mensaje introductorio al usuario
    cout << "Calculate the area of a circle." << endl;

    // Solicitar al usuario que ingrese el radio
    cout << "Enter the radius of the circle:" << endl;
    cin >> radius;

    // Calcular el área con la fórmula: pi * radio * radio
    area = pi * radius * radius;

    // Verificar si el área es par o impar
    if (area % 2 == 0)
    {
        // Mostrar que el resultado es par
        cout << "The area of the circle is: " << area << ". The result is even." << endl;
    }
    else
    {
        // Mostrar que el resultado es impar
        cout << "The result is: " << area << ". It is odd." << endl;
    }

    return 0;
}
