/*
    ============================================================================
    PROGRAMA: SISTEMA DE PEDIDOS PARA CAFETERÍA 
    ----------------------------------------------------------------------------
    Este programa utiliza códigos numéricos para identificar productos en lugar
    de almacenar sus nombres como texto.
    ============================================================================
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int categoria, opcion;
    float precio = 0.0;
    const float IVA = 0.13f;
    int codigo_producto = 0; // Código numérico que identifica el producto

    // Mostrar menú principal
    cout << "====== Bienvenido a la Cafetería UCA ======" << endl;
    cout << "Por favor, elija una categoría:" << endl;
    cout << "1. Bebidas" << endl;
    cout << "2. Comida" << endl;
    cout << "Categoría: ";
    cin >> categoria;

    // Validar la categoría seleccionada
    if (categoria != 1 && categoria != 2) {
        cout << "Categoría no válida." << endl;
        return 1;
    }

    // Mostrar menú de productos según la categoría elegida
    switch (categoria) {
    case 1: // Bebidas
        cout << "Elija una bebida:" << endl;
        cout << "1. Café ($1.50)" << endl;
        cout << "2. Té ($1.20)" << endl;
        cout << "3. Jugo natural ($2.00)" << endl;
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 1) {
            codigo_producto = 101; // Código para Café
            precio = 1.50f;
        }
        else if (opcion == 2) {
            codigo_producto = 102; // Código para Té
            precio = 1.20f;
        }
        else if (opcion == 3) {
            codigo_producto = 103; // Código para Jugo natural
            precio = 2.00f;
        }
        else {
            cout << "Opción de bebida no válida." << endl;
            return 1;
        }
        break;

    case 2: // Comida
        cout << "Elija un alimento:" << endl;
        cout << "1. Sandwich de pollo ($2.50)" << endl;
        cout << "2. Pupusas (3 unidades) ($1.75)" << endl;
        cout << "3. Empanada ($1.00)" << endl;
        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 1) {
            codigo_producto = 201; // Código para Sandwich de pollo
            precio = 2.50f;
        }
        else if (opcion == 2) {
            codigo_producto = 202; // Código para Pupusas
            precio = 1.75f;
        }
        else if (opcion == 3) {
            codigo_producto = 203; // Código para Empanada
            precio = 1.00f;
        }
        else {
            cout << "Opción de comida no válida." << endl;
            return 1;
        }
        break;
    }

    // Calcular IVA y total a pagar
    float totalIVA = precio * IVA;
    float totalPagar = precio + totalIVA;

    // Mostrar resumen del pedido
    cout << fixed << setprecision(2);
    cout << "\nResumen del pedido:" << endl;
    
    // Mostrar el nombre del producto basado en el código
    cout << "Producto seleccionado: ";
    switch (codigo_producto) {
        case 101: cout << "Café"; break;
        case 102: cout << "Té"; break;
        case 103: cout << "Jugo natural"; break;
        case 201: cout << "Sandwich de pollo"; break;
        case 202: cout << "Pupusas"; break;
        case 203: cout << "Empanada"; break;
    }
    
    cout << endl;
    cout << "Precio base: $" << precio << endl;
    cout << "IVA (13%): $" << totalIVA << endl;
    cout << "Total a pagar: $" << totalPagar << endl;

    return 0;
}