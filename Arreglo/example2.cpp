#include <iostream>
using namespace std;

int main()
{
    int contadorpositivopar = 0;
    int contadornegativopar = 0;
    int contadorpositivoimpar = 0;
    int contadornegativoimpar = 0; // Inicializar el contador
    int numeros[5]; // Declaración del arreglo
    // Pedir al usuario que ingrese valores
    cout << "Ingrese 5 números:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Mostrar los números ingresados
    cout << "Números ingresados:" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] % 2 == 0 && numeros[i] < 0)
        {
            cout << "Número " << i + 1 << ": " << numeros[i] << " (Par) y negativo " << endl;
            contadornegativopar++;
            cout<< "Contador de negativos pares: ";
            cout << contadornegativopar; // Incrementar el contador de negativos pares
        }
        else if (numeros[i] % 2 == 0 && numeros[i] > 0)
        {
            cout << "Número " << i + 1 << ": " << numeros[i] << " (Par) y positivo" << endl;
        }
        else if (numeros[i] % 2 != 0 && numeros[i] < 0)
        {
            cout << "Número " << i + 1 << ": " << numeros[i] << " (Impar) y negativo" << endl;
        }
        else
        {
            cout << "Número " << i + 1 << ": " << numeros[i] << " (Impar) y positivo" << endl;
        }
    }

    return 0;
}
