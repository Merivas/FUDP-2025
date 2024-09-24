#include <iostream>
using   namespace std ;

int main() {
    int numero;
    cout<< "Hola, ingresar un numero entero por favor:\n";
    cout<< "Hola, ingresar un numero entero por favor:"<<endl;
    cin >> numero;
    if(numero<0){
        cout << "su numero ingresado:"<<numero<<"por lo tanto es negativo";
    } else
    {
        cout << "su numero ingresado:" << numero <<"es positivo" ;      
    }
    return 0;
   }
   