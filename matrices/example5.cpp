#include <iostream>
#include <cstring> // Para usar strcat
using namespace std;

int main()
{
    char cadena1[50] = "Hola ";
    char cadena2[] = "mundo";

    strcat(cadena1, cadena2); // Concatena cadena2 al final de cadena1

    cout << "Cadena concatenada: " << cadena1 << endl;

    return 0;
}
