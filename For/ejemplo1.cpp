#include <iostream>
using namespace std;

int main() {
    int n=0, a;
    
    cout<<"podrias ingresar un numero que sera tu limite";
   cin >> a;
    for (int i = 1; i <= a; i++) {
        // Imprimir el valor actual de i
        cout << i << " ";
    }

    cout << endl;  // Salto de línea al final
    return 0;
}
