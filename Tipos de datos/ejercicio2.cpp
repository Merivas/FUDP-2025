#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radio, areaCirculo, areaCirculo2, areaCirculo3,lado,areaCuadrado;
    int base,altura,areaTriangulo;

    cout << "area del circulo"<<endl;
    cout << "Porfavor podria digitar un numero para el radio " << endl;
    cin >> radio;

    areaCirculo = 3.1416 * radio * radio;
    areaCirculo2 = 3.1416 * pow(radio, 2);

    cout << "Su area del circulo es el siguiente : " << areaCirculo << endl;
    cout << "Su area del circulo es el siguiente : " << areaCirculo2 << endl;

    cout << "area del cuadrado "<<endl;
    cout << "podria digitarme el valor numerico del lado "<<endl;
    cin>>lado;
    areaCuadrado= pow(lado,2);
    cout << "su area del cuadrado es : "<<areaCuadrado<<endl;

    cout << "area del triangulo"<<endl;
    cout << "podria digitarme el valor numerico de la base"<<endl;
    cin>>base;
    cout << "podria digitarme el valor numerico de la altura "<<endl;
    cin>>altura;

    areaTriangulo=(base*altura)/2;

    cout << "su area del triangulo es : "<<areaTriangulo<<endl;
    return 0;
}