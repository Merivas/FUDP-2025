#include <iostream>
using namespace std;

struct Estudiante {
    string nombre;
    string carnet;
    int edad;
};

void imprimirEstudiante(Estudiante e) {
    cout << "Nombre: " << e.nombre << endl;
    cout << "Carnet: " << e.carnet << endl;
    cout << "Edad: " << e.edad << endl;
}

int main() {
    Estudiante est = {"Juan Pérez", "20231234", 20};
    imprimirEstudiante(est);
    return 0;
}
