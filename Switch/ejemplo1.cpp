#include <iostream>
using namespace std;

int main()
{
    int n=0;
    int V;
    cout << "hola, podrias ingresar un numero entero";
    cin >> V;

SUMA = V*2 
    switch (SUMA)
    {
    case 200 :
        cout << n << "lunes\n";
        break;
    case 'M':
        cout << n << "martes\n";
        break;
    case 'm':
        cout << n << "miercoles\n";
        break;
    case 'J':
        cout << n << "jueves\n";
        break;
    case 'V':
        cout << n << "Viernes\n";
        break;
     case 'S':
        cout << n << "Sabado\n";
        break;
     case 'D':
        cout << n << "Domingo\n";
        break;
    default:
        cout << "datos incorrectos";
        
        break;
    }

    

    return 0;
}