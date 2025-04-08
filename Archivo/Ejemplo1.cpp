#include <iostream>   // Para cout y endl
#include <fstream>    // Para ofstream e ifstream
#include <string>     // Para el tipo de dato string

using namespace std;

int main() {
    // Crear y abrir un archivo de texto en modo escritura
    ofstream archivo("datos.txt"); // `ofstream` abre un archivo en modo escritura

    if (archivo.is_open()) { // Verificar si el archivo se abrió correctamente
        archivo << "Hola, este es un archivo de prueba.\n"; // Escribir en el archivo
        archivo << "Cada línea se guarda en el archivo.\n"; // Otra línea en el archivo
        archivo.close(); // Cerrar el archivo después de escribir
        cout << "Archivo escrito correctamente.\n"; // Mostrar mensaje de confirmación
    } else {
        cout << "No se pudo abrir el archivo para escribir.\n"; // Error si no se puede abrir
    }

    // Abrir el archivo en modo lectura
    ifstream archivoLectura("datos.txt"); // `ifstream` abre el archivo en modo lectura
    string linea; // Variable para almacenar cada línea del archivo

    if (archivoLectura.is_open()) { // Verificar si el archivo se abrió correctamente
        cout << "Contenido del archivo:\n"; // Mensaje que indica el inicio de la lectura
        while (getline(archivoLectura, linea)) { // Leer cada línea del archivo
            cout << linea << endl; // Mostrar cada línea en pantalla
        }
        archivoLectura.close(); // Cerrar el archivo después de leer
    } else {
        cout << "No se pudo abrir el archivo para leer.\n"; // Error si no se puede abrir
    }

    return 0;
}
