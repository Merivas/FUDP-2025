/*
    Desarrolle un programa en c++ que solicite la usuario ingresar su salario mensual brutp
    Y luego realizar siguientes cálculos:
    1. Descuentos obligatorios:
    - Seguro social (ISS): 3% del salario, tope máximo de $30, solo aplica a $1,000
    - AFFP 7.25% del salario
    - Renta, se calcula sobre el salario neto después de ISSS y AFP
    Hasta $472.99 ---- Exento
    de $472.01 a $895.24 ---- 10%
    de $895.25 a $2038.10 ---- 20%
    Mas de $2038.10 ---- 30%
    Resultado
    Ingrese su salario: $
    Que descuento calcular
    ---------- Menu -----------
    | 1. ISSS
    | 2. AFP
    | 3. Renta
    | 4. Total
    | 5. Salir
    -------------------------
    Su saldo actual:
    Su saldo - impuesto:
    Cada impuesto

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaracion de variables
    int option;
    float grossMonthlySalary, salaryWithTaxes, isss, afp, income, total;

    cout << "--------------------------" << endl;
    // Solicitar al usuario que ingrese su salario
    cout << "Enter your salary: $";
    cin >> grossMonthlySalary;
    cout << "--------------------------" << endl;

    // Usar un switch para realizar la operación que realizo el usuario
    if (grossMonthlySalary >= 1)
    {
        // Mostrar el menú de opciones para calcular sus diferentes descuentos y taxes
        cout << "What discount do you want to calculate:" << endl;
        cout << "-----------Menu-----------" << endl;
        cout << "| 1. ISSS                |" << endl;
        cout << "| 2. AFP                 |" << endl;
        cout << "| 3. Rent (Renta)        |" << endl;
        cout << "| 4. Total               |" << endl;
        cout << "| 5. Leave               |" << endl;
        cout << "--------------------------" << endl;
        cout << "Choose: ";
        // Se guarda la opcion
        cin >> option;
        cout << "--------------------------" << endl;
        switch (option)
        {
        case 1:
            // ISS
            if (grossMonthlySalary >= 1000.00 || ((0.03 * grossMonthlySalary) >= 30.00))
            {
                isss = 30.00;
                cout << "Your ISSS is $" << isss << endl;
            }
            else
            {
                isss = (0.03 * grossMonthlySalary);
                cout << "Your ISSS is $" << isss << endl;
            }

            // Se le resta al salario bruto el salario del isss
            salaryWithTaxes = grossMonthlySalary - isss;
            // Se le imprima mensajes sobre su balance y lo que pago con sus descuentos
            cout << "Your current balance: $" << grossMonthlySalary << endl;
            cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
            break;
        case 2:
            // AFP
            afp = 0.0725 * grossMonthlySalary;
            cout << "Your AFP is $" << afp << endl;
            // Se le resta al salario bruto el salario del afp
            salaryWithTaxes = grossMonthlySalary - afp;
            // Se le imprima mensajes sobre su balance y lo que pago con sus descuentos
            cout << "Your current balance: $" << grossMonthlySalary << endl;
            cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
            break;
        case 3:
            // Descuento Renta
            // Calcular primero el ISS
            if (grossMonthlySalary >= 1000.00 || ((0.03 * grossMonthlySalary) >= 30.00))
            {
                isss = 30.00;
            }
            else
            {
                isss = (0.03 * grossMonthlySalary);
            }
            // Calcular despues el AFP
            afp = 0.0725 * grossMonthlySalary;

            // Se le resta al salario bruto el salario del isss y afp
            salaryWithTaxes = grossMonthlySalary - isss - afp;
            // Condicionales para ver cual porcentaje de la renta le tiene que cobrar y se le muestra
            if (salaryWithTaxes <= 472.99)
            {
                // Menor del 472.99
                cout << "You don't pay rent" << endl;
                cout << "Your current balance: $" << grossMonthlySalary << endl;
                cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
                cout << "Your paid of ISSS: $" << isss << endl;
                cout << "Your paid of AFP: $" << afp << endl;
            }
            else if (salaryWithTaxes >= 473.00 && salaryWithTaxes <= 895.24)
            {
                // Del rango de 473 a 895.24
                // Se calcula el porcentaje de renta que se le va a restar al salario del usuario
                income = 0.1 * salaryWithTaxes;
                salaryWithTaxes = salaryWithTaxes - income;
                // Mensaje indicando todo lo que pagara
                cout << "You pay 10% of rent" << endl;
                cout << "Your current balance: $" << grossMonthlySalary << endl;
                cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
                cout << "Your paid of ISSS: $" << isss << endl;
                cout << "Your paid of AFP: $" << afp << endl;
                cout << "Your paid of rent: $" << income << endl;
            }
            else if (salaryWithTaxes >= 895.25 && salaryWithTaxes <= 2038.10)
            {
                // Del rango de 473 a 895.24
                // Se calcula el porcentaje de renta que se le va a restar al salario del usuario
                income = 0.2 * salaryWithTaxes;
                salaryWithTaxes = salaryWithTaxes - income;
                // Mensajes para el usuario
                cout << "You pay 20% of rent" << endl;
                cout << "Your current balance: $" << grossMonthlySalary << endl;
                cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
                cout << "Your paid of ISSS: $" << isss << endl;
                cout << "Your paid of AFP: $" << afp << endl;
                cout << "Your paid of rent: $" << income << endl;
            }
            else
            {
                // Mas de 2038.10
                // Se calcula el porcentaje de renta que se le va a restar al salario del usuario
                income = 0.3 * salaryWithTaxes;
                salaryWithTaxes = salaryWithTaxes - income;
                // Mensajes para el usuario
                cout << "You pay 30% of rent" << endl;
                cout << "Your current balance: $" << grossMonthlySalary << endl;
                cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
                cout << "Your paid of ISSS: $" << isss << endl;
                cout << "Your paid of AFP: $" << afp << endl;
                cout << "Your paid of rent: $" << income << endl;
            }
            break;
        case 4:
            // Calcular TODITO
            // Calcular primero el ISS
            if (grossMonthlySalary >= 1000.00 || ((0.03 * grossMonthlySalary) >= 30.00))
            {
                isss = 30.00;
            }
            else
            {
                isss = (0.03 * grossMonthlySalary);
            }
            // Calcular despues el AFP
            afp = 0.0725 * grossMonthlySalary;

            // Se le resta al salario bruto el salario del isss y afp
            salaryWithTaxes = grossMonthlySalary - isss - afp;
            // Condicionales para ver cual porcentaje de la renta le tiene que cobrar y se le muestra
            if (salaryWithTaxes <= 472.99)
            {
                // Menor del 472.99
                cout << "Your current balance: $" << grossMonthlySalary << endl;
                cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
                cout << "Your paid of ISSS: $" << isss << endl;
                cout << "Your paid of AFP: $" << afp << endl;
                cout << "You don't pay rent" << endl;
            }
            else if (salaryWithTaxes >= 473.00 && salaryWithTaxes <= 895.24)
            {
                // Del rango de 473 a 895.24
                // Se calcula el porcentaje de renta que se le va a restar al salario del usuario
                income = 0.1 * salaryWithTaxes;
                salaryWithTaxes = salaryWithTaxes - income;
                // Mensaje indicando todo lo que pagara
                cout << "Your current balance: $" << grossMonthlySalary << endl;
                cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
                cout << "Your paid of ISSS: $" << isss << endl;
                cout << "Your paid of AFP: $" << afp << endl;
                cout << "Your paid of rent: $" << income << endl;
                cout << "You pay 10% of rent" << endl;
            }
            else if (salaryWithTaxes >= 895.25 && salaryWithTaxes <= 2038.10)
            {
                // Del rango de 473 a 895.24
                // Se calcula el porcentaje de renta que se le va a restar al salario del usuario
                income = 0.2 * salaryWithTaxes;
                salaryWithTaxes = salaryWithTaxes - income;
                // Mensajes para el usuario
                cout << "Your current balance: $" << grossMonthlySalary << endl;
                cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
                cout << "Your paid of ISSS: $" << isss << endl;
                cout << "Your paid of AFP: $" << afp << endl;
                cout << "Your paid of rent: $" << income << endl;
                cout << "You pay 20% of rent" << endl;
            }
            else
            {
                // Mas de 895.24
                // Se calcula el porcentaje de renta que se le va a restar al salario del usuario
                income = 0.3 * salaryWithTaxes;
                salaryWithTaxes = salaryWithTaxes - income;
                // Mensajes para el usuario
                cout << "Your current balance: $" << grossMonthlySalary << endl;
                cout << "Your balances with taxes: $" << salaryWithTaxes << endl;
                cout << "Your paid of ISSS: $" << isss << endl;
                cout << "Your paid of AFP: $" << afp << endl;
                cout << "Your paid of rent: $" << income << endl;
                cout << "You paid 30% of rent" << endl;
            }
            break;
        default:
            cout << "Chaoou" << endl;
            return 1; // Salida temprana del programa si la opción no es válida
        }
    }
    else
    {
        cout << "Error, We failed to try to progress the data, please try again, avoid negative numbers and 0" << endl;
    }

    return 0;
}

//copyright     00003525