#include <iostream>
#include <cmath>
using   namespace std ;

int main() {
int y , x;
cout << "porfavor ingrese el numero"<<endl;
cin >> y ;

x=pow(y,y);

if (x%2==0)
{
    cout<<"El numero : "<<x<< "es par";

}
else {
    cout<<"El numero : "<<x<< "es impar";
}


/*if (y<0)
{
    cout<<"El numero : "<<y<< "es negativo";

}
else{
    cout<<"El numero : "<<y<< "es positivo";
}
*/

    return 0 ;
}