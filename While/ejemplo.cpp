#include <iostream>
using namespace std;
int main()
{
    int numeroSecreto, intento, contador = 0, maxIntentos = 10;
    do
    {
        cout << "Piensa un número entre 1 y 100 y escríbelo: ";
        cin >> numeroSecreto;
        if (numeroSecreto < 1 || numeroSecreto > 100)
            cout << "Número inválido. Debe estar entre 1 y 100.\n";
    } while (numeroSecreto < 1 || numeroSecreto > 100);
    cout << "Tienes " << maxIntentos << " intentos para adivinarlo.\n";
    do
    {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        if (intento >= 1 && intento <= 100)
        {
            contador++;
            if (intento == numeroSecreto)
            {
                cout << "¡Correcto! Lo adivinaste en " << contador << " intentos.\n";
                break;
            }
            else if (intento < numeroSecreto)
                cout << "El número es mayor.\n";
            else
                cout << "El número es menor.\n";
            if (contador == maxIntentos)
            {
                cout << "Se acabaron tus intentos. El número era: " << numeroSecreto << endl;
                break;
            }
        }
        else
            cout << "Número inválido. Debe estar entre 1 y 100.\n";
    } while (true);
    return 0;
}
