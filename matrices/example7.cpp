#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int resultado = strcmp(str1, str2);

    cout << "el valor de resultado es: " << resultado << endl;

    if (resultado == 0)
    {
        cout << "Las cadenas son iguales." << endl;
    }
    else if (resultado < 0)
    {
        cout << "'" << str1 << "' es menor que '" << str2 << "'." << endl;
    }
    else
    {
        cout << "'" << str1 << "' es mayor que '" << str2 << "'." << endl;
    }

    return 0;
}
