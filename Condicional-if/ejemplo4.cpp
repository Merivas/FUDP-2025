#include <iostream>
using namespace std;

int main () {
    int r, pi=3, resultado;
    cout << "Calcula el area de un circulo."<< endl ;
    cout << "Ingrese el radio del circulo:" << endl ;
    cin >> r ;
    resultado = pi * r * r;

    if (resultado%2==0){
        
        cout << "El area del circulo es:" << resultado << "el resultado es par"<< endl ;
    } else {
    cout << "el resultado es" << resultado << "es impar"<<endl;
    }
return 0;
}