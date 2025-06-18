#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

Persona mayorEdad(Persona a, Persona b) {
    if (a.edad > b.edad)
        return a;
    else
        return b;
}

int main() {
    Persona p1 = {"Carlos", 25};
    Persona p2 = {"María", 30};

    Persona mayor = mayorEdad(p1, p2);
    cout << "Persona con mayor edad: " << mayor.nombre << " (" << mayor.edad << " años)" << endl;

    return 0;
}
