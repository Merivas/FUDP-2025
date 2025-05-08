#include <iostream>
using namespace std;

int main()
{
    int n;               // Variable para almacenar el número ingresado por el usuario
    bool esPrimo = true; // Inicializamos una variable booleana que asume que el número es primo

    // Solicitar al usuario que ingrese un número entero
    cout << "Ingresa un número entero: ";
    cin >> n;

    // Verificar si el número es menor o igual a 1
    // Los números menores o iguales a 1 no son primos
    if (n <= 1)
    {
        esPrimo = false; // Marcar el número como no primo
    }
    else
    {
        // Verificar si el número tiene divisores distintos de 1 y de sí mismo
        // Comenzamos desde 2 hasta la raíz cuadrada de n (esto optimiza el programa)
        // Si n tiene un divisor entre 2 y √n, entonces no es primo
        for (int i = 2; i * i <= n; i++)
        {
            cout<<n<<endl;
            cout<<i<<endl;
            if (n % i == 0)
            {                    // Si n es divisible por i, entonces no es primo
                esPrimo = false; // Marcar el número como no primo
                         // Salir del ciclo porque ya sabemos que no es primo
            }
        }
    }

    // Mostrar el resultado final al usuario
    if (esPrimo)
    {
        cout << n << " es un número primo." << endl; // Si es primo, mostramos este mensaje
    }
    else
    {
        cout << n << " no es un número primo." << endl; // Si no es primo, mostramos este mensaje
    }

    return 0; // El programa termina correctamente
}
