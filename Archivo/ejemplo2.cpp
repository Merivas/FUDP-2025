#include <iostream>   // Para cout y endl
#include <fstream>    // Para ofstream e ifstream
#include <string>     // Para el tipo de dato string

using namespace std;


int main() {
    // Crear archivo binario y escribir un número entero en él
    ofstream archivo("datos.bin", ios::binary); // Abre el archivo en modo binario para escritura

    int numero = 12345; // Número entero que queremos almacenar en el archivo

    // Verificar si el archivo se abrió correctamente para escritura
    if (archivo.is_open()) {
        archivo.write((char*)&numero, sizeof(numero)); // Escribe el número en el archivo en formato binario
        archivo.close(); // Cierra el archivo después de escribir
        cout << "Número guardado en formato binario.\n"; // Confirmación de escritura
    } else {
        cout << "No se pudo abrir el archivo para escribir.\n"; // Mensaje de error
    }

    // Leer el número entero desde el archivo binario
    ifstream archivoLectura("datos.bin", ios::binary); // Abre el archivo en modo binario para lectura
    int numeroLeido; // Variable donde almacenaremos el número leído

    // Verificar si el archivo se abrió correctamente para lectura
    if (archivoLectura.is_open()) {
        archivoLectura.read((char*)&numeroLeido, sizeof(numeroLeido)); // Lee el número desde el archivo
        archivoLectura.close(); // Cierra el archivo después de leer
        cout << "Número leído desde archivo binario: " << numeroLeido << "\n"; // Muestra el número leído
    } else {
        cout << "No se pudo abrir el archivo para leer.\n"; // Mensaje de error si no se pudo abrir
    }

    return 0;
}
