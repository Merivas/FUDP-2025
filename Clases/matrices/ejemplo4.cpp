#include <iostream>
using namespace std;

int main()
{
    double Ingresomensual = 0, descuentoAFP = 0, descuentorenta = 0, netIncome = 0, Reciboelectricidad = 0, Recibodeagua = 0, Recibodeinternet = 0, Recibodegasolina = 0, Gastos = 0, descuentosAFPyRenta = 0, Remaining;
    cout << "Calculemos tus descuentos y gastos." << endl;
    cout << "Digite su ingreso mensual:" << endl;
    cin >> Ingresomensual;
    if (Ingresomensual < 0)
    {
        cout << "Error, el monto ingresado debe ser mayor a cero. Intente denuevo" << endl;
    }
    else
    {
        (Ingresomensual > 0);

        double calculateAFP(Ingresomensual);
        if (Ingresomensual < 500)
        {
            descuentoAFP = Ingresomensual * 0.05;
            cout << "Su descuento es: " << descuentoAFP << endl;
        }
        else if (500 <= Ingresomensual < 1000)
        {
            descuentoAFP = Ingresomensual - 0.07;
            cout << "Su descuento es: " << descuentoAFP << endl;
        }
        else
        {
            (Ingresomensual > 1000);
            descuentoAFP = Ingresomensual - 0.15;
            cout << "Su descuento es: " << descuentoAFP << endl;
        }

        double calculateTax(Ingresomensual);
        if (Ingresomensual < 500)
        {
            descuentorenta = Ingresomensual * 0.10;
            cout << "Su descuento es: " << descuentorenta<< endl;
        }
        else if (500 <= Ingresomensual < 1000)
        {
            descuentorenta = Ingresomensual - 0.12;
            cout << "Su descuento es: " << descuentorenta<< endl;
        }
        else
        {
            (Ingresomensual > 1000);
            descuentorenta = Ingresomensual - 0.15;
            cout << "Su descuento es: " << descuentorenta<< endl;
        }

        descuentosAFPyRenta = descuentoAFP + descuentorenta;

        netIncome = Ingresomensual - (descuentoAFP + descuentorenta);

        double getElectricityBill(Reciboelectricidad);
        {

            cout << "Ingrese el monto de su recibo de luz:" << endl;
            cin >> Reciboelectricidad;
            return 0;
        }
        double getWaterBill(Recibodeagua);
        {
            cout << "Ingrese el monto de su recibo de agua:" << endl;
            cin >> Recibodeagua;
            return 0;
        }

        double getInternetBill(Recibodeinternet);
        {
            cout << "Ingrese el monto de su recibo de internet:" << endl;
            cin >> Recibodeinternet;
            return 0;
        }

        double getGasolineBill(Recibodegasolina);
        {
            cout << "Ingrese el monto de su recibo de gasolina:" << endl;
            cin >> Recibodegasolina;
            return 0;
        }

        Remaining = netIncome - Gastos;

        if (Recibodeagua > 0 && Recibodegasolina > 0 && Recibodeinternet > 0 && Reciboelectricidad > 0)
        {

            Gastos = Recibodeagua + Recibodegasolina + Recibodeinternet + Reciboelectricidad;
        }
        bool areExpensesGreaterThanNetIncome(double Gastos, double netIncome);
        {
            cout << "Tus gastos son:" << Gastos << endl;
            if (Gastos > netIncome)
            {
                cout << "Tendre que pagar con mi alma la cantidad" << Gastos << "de dinero." << endl;
            }
            else if (Gastos <= netIncome)
            {
                cout << "Los descuentos son:" << descuentosAFPyRenta << endl;
                cout << "El ingreso neto es:" << netIncome << endl;
                cout << "El total de gastos es:" << Gastos << endl;
                cout << "Saldo Restante:" << Remaining << endl;
            }

            if (Remaining < 100)
            {
                cout << "Con" << Remaining << "de dolares, Dios lo hara abundante" << endl;
            }
            else if (Remaining == 100)
            {
                cout << "Hoy me voy para Londres." << endl;
            }
            else
            {
                (Remaining > 100);
                cout << "Hoy me voy a la luna." << endl;
            }
            return 0;
        }
    }
    return 0;
}
// Me exploto la cabeza en mitad de parcial y no pude terminarlo :c