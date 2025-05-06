/*Desarrolle un programa en c++ que solicite al usuario ingressar su salario mensual
bruto y luego realice los siguientes calculos:
1) descuentos obligatorios: Seguro social (3% del salario con un tope maximo de 30$
solo aplica hasta 1000$). AFP (7.25% del salario)
2) renta, se calcula sobre el salario neto despues de ISSS y AFP
hasta 472 - ISR EXENTO
de 472.01 a 895.24 - 10%
de 895.25 a 2038.10 20%
mas de 2038.10 30%   */

#include <iostream>

using namespace std;

int main()
{
    int Menu;
    float Salario, ISSS, AFP, ISR, Impuesto, Saldo;

    cout << "Benvenido a la calcuradora de impuestos" << endl;
    cout << "Ingrese su salario bruto: ";
    cin >> Salario;
    if (Salario <= 0)
    {
        cout << "Ingrese un Salario Real" << endl;
        return 1;
    }
    cout << "Por favor, seleccione una de las siguientes opciones" << endl;
    cout << "1. ISSS" << endl;
    cout << "2. AFP" << endl;
    cout << "3. ISR" << endl;
    cout << "4. Total (Su saldo luego de impuestos)" << endl;
    cout << "5. Salir" << endl;
    cin >> Menu;

    switch (Menu)
    {
    case 1:
        ISSS = 0;
        if (Salario >= 1000.00)
        {
            ISSS += 30;
        }
        else
        {
            ISSS = Salario * 0.03;
        }
        cout << "Su total a pagar de ISSS es de: $" << ISSS << endl;
        cout << "El ISSS corresponde al 3%"
                "de su salario"
             << endl;
        break;
    case 2:
        AFP = 0;
        AFP = Salario * 0.075;

        cout << "Su total a pagar de AFP es de: $" << AFP << endl;
        cout << "El AFP corresponde al 7.5%"
                "de su salario"
             << endl;
        break;
    case 3:
        ISR = 0;
        if (Salario <= 472.00)
        {
            ISR = Salario * 0;
            cout << "Usted esta exento de pagar ISR";
        }
        else if (Salario >= 472.01 && Salario <= 895.24)
        {
            ISR = Salario * 0.1;

            cout << "Su total a pagar de ISR es de: $" << ISR << endl;
            cout << "El ISR corresponde al 10%"
                    "de su salario"
                 << endl;
        }
        else if (Salario >= 895.25 && Salario <= 2038.10)
        {
            ISR = Salario * 0.2;
            cout << "Su total a pagar de ISR es de: $" << ISR;
            cout << "El ISR corresponde al 20%"
                    "de su salario"
                 << endl;
        }
        else
        {
            ISR = Salario * 0.3;
            cout << "Su total a pagar de ISR es de: $" << ISR;
            cout << "El ISR corresponde al 30%"
                    "de su salario"
                 << endl;
        }
        break;
    case 4:
        ISSS = 0;
        AFP = 0;
        ISR = 0;
        Impuesto = 0;
        if (Salario >= 1000.00)
        {
            ISSS += 30;
            Impuesto += ISSS;
        }
        else
        {
            ISSS = Salario * 0.03;
            Impuesto += ISSS;
        }
        /*---------------------------------------------------------------------*/
        AFP = Salario * 0.075;
        Impuesto += AFP;
        /*---------------------------------------------------------------------*/
        if (Salario <= 472.00)
        {
            ISR = Salario * 0;
        }
        else if (Salario >= 472.01 && Salario <= 895.24)
        {
            ISR = Salario * 0.1;
            Impuesto += ISR;
        }
        else if (Salario >= 895.25 && Salario <= 2038.10)
        {
            ISR = Salario * 0.2;
            Impuesto += ISR;
        }
        else
        {
            ISR = Salario * 0.3;
            Impuesto += ISR;
        }
        /*---------------------------------------------------------------------*/
        Saldo = Salario - Impuesto;

        cout << "Su saldo luego de impuestos es de: " << Saldo << endl;
        break;

    case 5:
        cout << "Gracias por Utilizar la calculadora de impuestos." << endl;
        break;
    default:
        cout << "Error. Seleccione unicamente una de las opciones." << endl;
        return 1;
    }

    return 0;
}

//Carlos Fernando Martinez Mogollon 00181425 UCA Jose Simeon Cañas