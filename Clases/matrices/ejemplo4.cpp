#include <iostream>
#include <cstdlib> // Para srand() y rand()
#include <ctime>   // Para time()
using namespace std;

int main()
{
    const int FILAS = 5;
    const int COLUMNAS = 5;
    int matriz[FILAS][COLUMNAS] = {0}; // Inicializa la matriz con ceros

    // Semilla para el generador de números aleatorios
    srand(time(0));

    // Colocar el tesoro en una posición aleatoria
    // Se generan las posiciones aleatorias para el tesoro en la matriz.
    // 'rand()' genera un número entero aleatorio.
    // 'FILAS' y 'COLUMNAS' representan las dimensiones de la matriz.
    // Al aplicar el operador módulo (%) con FILAS y COLUMNAS,
    // nos aseguramos de que el número generado esté dentro del rango
    // válido para las filas y columnas de la matriz, es decir, entre 0 y FILAS-1
    // para la fila y entre 0 y COLUMNAS-1 para la columna.
    // Esto garantiza que la posición del tesoro esté siempre dentro de la matriz.
    int tesoroFila = rand() % FILAS;
    int tesoroColumna = rand() % COLUMNAS;
    matriz[tesoroFila][tesoroColumna] = 1; // El tesoro está representado por un "1"
    cout << tesoroFila << endl;
    cout << tesoroColumna << endl;
    int intentoFila, intentoColumna;
    bool encontrado = false;

    cout << "¡Bienvenido a la Búsqueda del Tesoro!" << endl;
    cout << "Intenta adivinar la posición del tesoro en una matriz de 5x5." << endl;

    // Bucle del juego: el usuario intenta hasta encontrar el tesoro
    while (!encontrado)
    {
        // Mostrar la matriz (sin mostrar el tesoro)
        cout << "Matriz de juego:" << endl;
        for (int i = 0; i < FILAS; i++)
        {
            for (int j = 0; j < COLUMNAS; j++)
            {
                if (matriz[i][j] == 1)
                {
                    cout << "- "; // Ocultar la ubicación del tesoro
                }
                else
                {
                    cout << "0 "; // Mostrar posiciones vacías
                }
            }
            cout << endl;
        }

        // Pedir al usuario que ingrese una coordenada
        cout << "Ingresa la fila (0 a 4): ";
        cin >> intentoFila;
        cout << "Ingresa la columna (0 a 4): ";
        cin >> intentoColumna;

        // Verificar si el intento es correcto
        if (intentoFila == tesoroFila && intentoColumna == tesoroColumna)
        {
            cout << "¡Felicidades! Has encontrado el tesoro en (" << intentoFila << ", " << intentoColumna << ")!" << endl;
            encontrado = true;
        }
        else
        {
            cout << "No hay nada en esa posición. ¡Intenta de nuevo!" << endl;
        }
    }

    return 0;
}
