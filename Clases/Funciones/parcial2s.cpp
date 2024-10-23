#include <iostream>

using namespace std;

// Funciones para calcular descuentos según el rango del sueldo
double calculateAFP(double salary) {
    if (salary < 500) {
        return salary * 0.05; // 5% de AFP
    } else if (salary <= 1000) {
        return salary * 0.07; // 7% de AFP
    } else {
        return salary * 0.10; // 10% de AFP
    }
}

double calculateTax(double salary) {
    if (salary < 500) {
        return salary * 0.05; // 5% de Renta
    } else if (salary <= 1000) {
        return salary * 0.10; // 10% de Renta
    } else {
        return salary * 0.15; // 15% de Renta
    }
}

// Función para solicitar montos positivos usando if
double getPositiveAmount(string prompt) {
    double amount;
    cout << prompt;
    cin >> amount;

    // Validar que el valor ingresado sea mayor a 0
    if (amount <= 0) {
        cout << "Error: El monto debe ser mayor a 0. Intente nuevamente.\n";
        cout << prompt; // Volver a mostrar el mensaje
        cin >> amount;  // Solicitar nuevamente el monto
    }

    return amount;
}

// Funciones para solicitar montos de cada recibo
double getElectricityBill() {
    return getPositiveAmount("Ingrese el monto del recibo de luz: ");
}

double getWaterBill() {
    return getPositiveAmount("Ingrese el monto del recibo de agua: ");
}

double getInternetBill() {
    return getPositiveAmount("Ingrese el monto del recibo de internet: ");
}

double getGasolineBill() {
    return getPositiveAmount("Ingrese el monto del recibo de gasolina: ");
}

// Función para verificar si los gastos son mayores que el ingreso neto
bool areExpensesGreaterThanNetIncome(double totalExpenses, double netIncome) {
    return totalExpenses > netIncome;
}

int main() {
    double totalIncome;

    // Solicitar ingreso mensual total y validar que sea mayor a 0
    totalIncome = getPositiveAmount("Ingrese su ingreso mensual total: ");

    // Cálculo de descuentos
    double afp = calculateAFP(totalIncome);
    double tax = calculateTax(totalIncome);

    // Calcular ingreso neto después de descuentos
    double netIncome = totalIncome - (afp + tax);

    // Solicitar los gastos utilizando funciones
    double electricity = getElectricityBill();
    double water = getWaterBill();
    double internet = getInternetBill();
    double gasoline = getGasolineBill();

    // Calcular total de gastos
    double totalExpenses = electricity + water + internet + gasoline;

    // Verificar si los gastos son mayores que el ingreso neto usando la función
    if (areExpensesGreaterThanNetIncome(totalExpenses, netIncome)) {
        cout << "Tendré que pagar con mi alma la cantidad " << totalExpenses << " de dinero.\n";
    } else {
        // Calcular el saldo final
        double finalBalance = netIncome - totalExpenses;

        // Mostrar los descuentos y el ingreso neto
        cout << "Descuentos del sueldo:\n";
        cout << "- AFP: " << afp << "\n";
        cout << "- Renta: " << tax << "\n";
        cout << "Ingreso neto después de descuentos: " << netIncome << "\n";
        cout << "Total de gastos: " << totalExpenses << "\n";
        cout << "Saldo restante: " << finalBalance << "\n";

        // Condiciones especiales según el saldo restante
        if (finalBalance < 100) {
            cout << "Con " << finalBalance << " pesos, Dios lo hará abundante.\n";
        } else if (finalBalance > 100) {
            cout << "Hoy me voy a la Luna.\n";
        } else { // finalBalance == 100
            cout << "Hoy me voy para Londres.\n";
        }
    }

    // Mensaje de finalización
    cout << "Gracias por usar el programa de cálculo de descuentos.\n";

    return 0;
}
