#include <iostream>
using namespace std;

int main() {
    // Declaración e inicialización de un arreglo de enteros
    int numeros[] = {5, 10, 15, 20, 25,6};
    int tamanio = sizeof(numeros) / sizeof(numeros[0]);  // Calcular el tamaño del arreglo

    int suma = 0;

    // Sumar todos los elementos del arreglo
    for(int i = 0; i < tamanio; i++) {
        suma =+ numeros[i];
    }

    // Calcular el promedio
    float promedio = static_cast<float>(suma) / tamanio;

    // Mostrar resultados
    cout << "La suma de los elementos es: " << suma << endl;
    cout << "El promedio de los elementos es: " << promedio << endl;

    return 0;
}
