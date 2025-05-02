#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numberSolicited, plus, minus, multiply, division, power;
    bool logicalOperations;
    cout << "Hola, ingrese un numero que quiera calcular para realizar diferentes operaciones" << endl;
    cin >> numberSolicited;
    cout << "--------------------------------------------------------------------------" << endl;
    plus = numberSolicited + 10;
    cout << "La suma del numero mas 10 es: " << plus << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    minus = numberSolicited - 5;
    cout << "La resta del numero menos 5 es: " << minus << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    multiply = numberSolicited * 2;
    cout << "La multiplicacion del numero por 2 es: " << multiply << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    division = numberSolicited / 4;
    cout << "La division del numero entre 4 es: " << division << endl;

    cout << "--------------------------------------------------------------------------" << endl;
    power = pow(numberSolicited, 2);
    cout << "El numero elevado al cuadrado es: " << power << endl;

    cout << "--------------------------------------------------------------------------" << endl;
    logicalOperations = (numberSolicited > 0) && ((numberSolicited % 2) == 0);
    cout << "La operacion logica de ver si es numero mayor que 0 y par es, donde 0 es falso y 1 es verdadero: " << logicalOperations << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    cout << "Hola, aqui te comparto los resultados, donde el numero digitado fue " << numberSolicited << " y sus resultados:" << endl
         << "La suma del numero mas 10 es: " << plus << endl
         << "La resta del numero menos 5 es: " << minus << endl
         << "La multiplicacion del numero por 2 es: " << multiply << endl
         << "La division del numero entre 4 es: " << division << endl
         << "El numero elevado al cuadrado es: " << power << endl
         << "La operacion logica de ver si es numero mayor que 0 y par, donde 0 es falso y 1 es verdadero: " << logicalOperations << endl
         << "Gracias por ocuparnos, denos el punto porfis" << endl;

    return 0;
}