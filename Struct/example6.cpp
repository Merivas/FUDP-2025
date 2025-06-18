#include <iostream>
#include <fstream>
using namespace std;

struct Estudiante {
    string nombre;
    string carnet;
    int edad;
};

// Agrega un estudiante al archivo
void agregarEstudiante() {
    Estudiante e;
    cout << "Nombre (sin espacios): ";
    cin >> e.nombre;
    cout << "Carnet: ";
    cin >> e.carnet;
    cout << "Edad: ";
    cin >> e.edad;

    ofstream archivo("estudiantes.txt", ios::app);
    if (archivo.is_open()) {
        archivo << e.nombre << " " << e.carnet << " " << e.edad << endl;
        archivo.close();
        cout << "Estudiante agregado correctamente.\n";
    } else {
        cout << "Error al abrir el archivo.\n";
    }
}

// Muestra todos los estudiantes
void mostrarEstudiantes() {
    ifstream archivo("estudiantes.txt");
    Estudiante e;

    if (archivo.is_open()) {
        cout << "\n--- Lista de Estudiantes ---\n";
        while (archivo >> e.nombre >> e.carnet >> e.edad) {
            cout << "Nombre: " << e.nombre 
                << ", Carnet: " << e.carnet
                 << ", Edad: " << e.edad << endl;
        }
        archivo.close();
    } else {
        cout << "Error al abrir el archivo.\n";
    }
}

// Busca estudiante por carnet
void buscarEstudiante() {
    ifstream archivo("estudiantes.txt");
    Estudiante e;
    string buscado;
    bool encontrado = false;

    cout << "Ingrese carnet a buscar: ";
    cin >> buscado;

    if (archivo.is_open()) {
        while (archivo >> e.nombre >> e.carnet >> e.edad) {
            if (e.carnet == buscado) {
                cout << "Estudiante encontrado: "
                     << e.nombre << ", " << e.carnet << ", " << e.edad << endl;
                encontrado = true;
                break;
            }
        }
        archivo.close();
        if (!encontrado)
            cout << "Estudiante no encontrado.\n";
    } else {
        cout << "Error al abrir el archivo.\n";
    }
}

// Modifica estudiante por carnet
void modificarEstudiante() {
    ifstream archivo("estudiantes.txt");
    ofstream temp("temp.txt");
    Estudiante e;
    string buscado;
    bool modificado = false;

    cout << "Ingrese carnet a modificar: ";
    cin >> buscado;

    if (archivo.is_open() && temp.is_open()) {
        while (archivo >> e.nombre >> e.carnet >> e.edad) {
            if (e.carnet == buscado) {
                Estudiante nuevo;
                cout << "Nuevo nombre (sin espacios): ";
                cin >> nuevo.nombre;
                cout << "Nuevo carnet: ";
                cin >> nuevo.carnet;
                cout << "Nueva edad: ";
                cin >> nuevo.edad;

                temp << nuevo.nombre << " " << nuevo.carnet << " " << nuevo.edad << endl;
                modificado = true;
            } else {
                temp << e.nombre << " " << e.carnet << " " << e.edad << endl;
            }
        }
        archivo.close();
        temp.close();
        remove("estudiantes.txt");
        rename("temp.txt", "estudiantes.txt");

        if (modificado)
            cout << "Estudiante modificado correctamente.\n";
        else
            cout << "Carnet no encontrado.\n";
    } else {
        cout << "Error abriendo los archivos.\n";
    }
}

// Elimina estudiante por carnet
void eliminarEstudiante() {
    ifstream archivo("estudiantes.txt");
    ofstream temp("temp.txt");
    Estudiante e;
    string buscado;
    bool eliminado = false;

    cout << "Ingrese carnet a eliminar: ";
    cin >> buscado;

    if (archivo.is_open() && temp.is_open()) {
        while (archivo >> e.nombre >> e.carnet >> e.edad) {
            if (e.carnet != buscado) {
                temp << e.nombre << " " << e.carnet << " " << e.edad << endl;
            } else {
                eliminado = true;
            }
        }
        archivo.close();
        temp.close();
        remove("estudiantes.txt");
        rename("temp.txt", "estudiantes.txt");

        if (eliminado)
            cout << "Estudiante eliminado correctamente.\n";
        else
            cout << "Carnet no encontrado.\n";
    } else {
        cout << "Error abriendo los archivos.\n";
    }
}

// Menú principal
int main() {
    int opcion;
    do {
        cout << "\n=== CRUD de Estudiantes ===\n";
        cout << "1. Agregar estudiante\n";
        cout << "2. Mostrar todos\n";
        cout << "3. Buscar por carnet\n";
        cout << "4. Modificar estudiante\n";
        cout << "5. Eliminar estudiante\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregarEstudiante(); break;
            case 2: mostrarEstudiantes(); break;
            case 3: buscarEstudiante(); break;
            case 4: modificarEstudiante(); break;
            case 5: eliminarEstudiante(); break;
            case 6: cout << "Saliendo...\n"; break;
            default: cout << "Opción inválida.\n";
        }

    } while (opcion != 6);

    return 0;
}
