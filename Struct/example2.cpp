#include <iostream>
using namespace std;

struct Estudiante {
    string nombre;
    string carnet;
    float notas[3];
};

float calcularPromedio(Estudiante e) {
    float suma = 0;
    for (int i = 0; i < 3; i++) {
        suma += e.notas[i];
    }
    return suma / 3;
}

int main() {
    Estudiante est = {"Ana López", "20235678", {8.5, 9.0, 7.5}};
    float promedio = calcularPromedio(est);
    cout << "Promedio: " << promedio << endl;
    return 0;
}
