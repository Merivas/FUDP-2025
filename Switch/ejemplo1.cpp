#include <iostream>
using namespace std;

int main()
{
    int res, n;
    cout << "hola, podrias ingresar un numero entero";
    cin >> n;
    res = n % 2;
    switch (res)
    {
    case 1:
        cout << n << "es un numero impar\n";
        break;
    case 0:
        cout << n << "es un numero par \n";
        break;
    default:
        cout << "datos incorrectos";
        break;
    }

    return 0;
}