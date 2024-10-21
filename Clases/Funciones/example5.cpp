#include <iostream>
#include <string>
using namespace std;

// Función que invierte una cadena
string invertirCadena(string cadena) {
    string invertida = "";
    for (int i = cadena.length() - 1; i >= 0; i--) {
        invertida += cadena[i];
    }
    return invertida;
}

int main() {
    string texto = "Hola Mundo";
    cout << "Cadena invertida: " << invertirCadena(texto) << endl;
    return 0;
}
