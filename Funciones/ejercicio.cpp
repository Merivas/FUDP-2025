#include <iostream>
using namespace std;

// prototype of the function
int convertion(int n)
{

    return (n * 9 / 5) + 32;
}

// FUNCION CUERPO
int main()
{
    int a;
    cout << "Ingrese un grado en celsius: ";
    cin >> a;

    cout << "El grado en fahrenheit es: " << convertion(a) << endl;
    return 0;
}