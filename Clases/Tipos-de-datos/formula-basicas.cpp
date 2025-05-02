#include <iostream>
#include <cmath>

using namespace std ;
int mondogo=0;

 int main (){

    //esto es un comentario 
  
/* 
    double radio , areaCirculo;
    cout << "Ingrese el radio del circulo"<< endl;
    cin >> radio ;
    areaCirculo=3.1416*pow(radio,2);
    cout<< "El area del circulo es el siguiente: "<<areaCirculo <<endl;
    cout<<"__________________________________";
*/
    int lado ,areaCuadrado;
    cout <<"Ingrese el lado del cuadrado"<< endl;
    cin>> lado;
    areaCuadrado=pow(lado,2);
    cout <<"El area del cuadrado es : "<<areaCuadrado<< endl;

    int base , altura, areaTriangulo;
    cout <<"Ingrese la base del triangulo "<< endl;
    cin>> base;
    cout <<"Ingrese la altura del triangulo "<< endl;
    cin>> altura;

    areaTriangulo=(base*altura)/2;
    cout <<"El area del triangulo es : "<<areaTriangulo<< endl;


    return 0;
 }
