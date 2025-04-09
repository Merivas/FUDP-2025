#include <iostream>
using namespace std;

// Función que devuelve el mayor de tres números
int mayorDeTres(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main() {
    int x = 3, y = 9, z = 5;
    cout << "El mayor de los tres es: " << mayorDeTres(x, y, z) << endl;
    return 0;
}
