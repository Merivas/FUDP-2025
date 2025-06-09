#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char origen[] = "Hola mundo";
    char destino[50]; // Asegúrate de que el destino tenga suficiente espacio

    strcpy(destino, origen);

    cout << "Cadena origen: " << origen << endl;
    cout << "Cadena destino (copiada): " << destino << endl;

    return 0;
}
