#include <iostream>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anio;
};

void buscarPorAutor(Libro libros[], int tam, string autorBuscado) {
    bool encontrado = false;
    for (int i = 0; i < tam; i++) {
        if (libros[i].autor == autorBuscado) {
            cout << "Titulo: " << libros[i].titulo << ", Año: " << libros[i].anio << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron libros del autor: " << autorBuscado << endl;
    }
}

int main() {
    Libro biblioteca[5] = {
        {"CienAnosDeSoledad", "GarciaMarquez", 1967},
        {"ElAmorEnLosTiemposDelColera", "GarciaMarquez", 1985},
        {"DonQuijote", "Cervantes", 1605},
        {"Rayuela", "Cortazar", 1963},
        {"Ficciones", "Borges", 1944}
    };

    string autor;
    cout << "Ingrese el nombre del autor (sin espacios): ";
    cin >> autor;

    buscarPorAutor(biblioteca, 5, autor);

    return 0;
}
