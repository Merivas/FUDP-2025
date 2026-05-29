#include <iostream>
using namespace std;

int main() {
    int contador = 1,n;
cout<<"ingrese un numero final ";
cin>>n;

    // Ciclo do-while
    do {
        cout << "Contador en do-while: " << contador << endl;
        contador++; // Incrementa el contador
    } while (contador <= n);
cout <<"salio del bucle";
    return 0;
}
