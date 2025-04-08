#include <iostream>
#include <fstream>

using namespace std;

struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    int n;

    // Solicitar al usuario la cantidad de personas a ingresar
    cout << "Ingrese el número de personas: ";
    cin >> n;

    // Definir un arreglo de personas de tamaño fijo (en este caso, 100 personas como ejemplo)
    if (n > 100) {
        cout << "Número de personas demasiado grande. El máximo es 100.\n";
        return 1;
    }
    Persona personas[100];

    // Pedir los datos de cada persona
    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el nombre de la persona #" << i + 1 << ": ";
        cin >> personas[i].nombre;
        cout << "Ingrese la edad de " << personas[i].nombre << ": ";
        cin >> personas[i].edad;
    }

    // Crear y abrir el archivo de texto en modo de anexado (no borra los datos existentes)
    ofstream archivo("personas.txt", ios::app);

    // Verificar si el archivo se abrió correctamente
    if (archivo.is_open()) {
        // Escribir los datos de todas las personas en el archivo
        for (int i = 0; i < n; ++i) {
            archivo << personas[i].nombre << " " << personas[i].edad << endl;
        }
        archivo.close();
        cout << "Datos guardados en el archivo personas.txt.\n";
    } else {
        cout << "No se pudo abrir el archivo para escribir.\n";
    }

    // Leer los datos desde el archivo
    ifstream archivoLectura("personas.txt");

    // Verificar si el archivo se abrió correctamente para lectura
    if (archivoLectura.is_open()) {
        cout << "Contenido del archivo:\n";
        Persona p;
        while (archivoLectura >> p.nombre >> p.edad) {
            cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
        }
        archivoLectura.close();
    } else {
        cout << "No se pudo abrir el archivo para leer.\n";
    }

    return 0;
}
