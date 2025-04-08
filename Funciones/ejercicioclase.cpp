#include <iostream>

using namespace std;

double averageLabos()
{
    double sumatoria = 0, promedio = 0;
    for (int i = 0; 9 > i; i++)
    {
        double number;
        cout << "Ingrese la nota " << (i + 1) << " de su laboratorio:\n";
        cin >> number;

        sumatoria = sumatoria + number;
    }

    return (sumatoria / 9) * 0.2;
}

double averagePartials()
{
    double sumatoria = 0;
    for (int i = 0; 2 > i; i++)
    {

        double number;
        cout << "Ingrese la nota " << (i + 1) << " de su parcial:\n";
        cin >> number;

        sumatoria = sumatoria + number;
    }
    return (sumatoria / 2) * 0.35;
}
double averageCortos()
{
    double sumatoria = 0;
    for (int i = 0; 2 > i; i++)
    {

        double number;
        cout << "Ingrese la nota " << (i + 1) << " de su corto:\n";
        cin >> number;

        sumatoria = sumatoria + number;
    }
    return (sumatoria / 2) * 0.20;
}

double gradeProject()
{
    double grade;
    cout << "Ingrese la nota de su proyecto:\n";
    cin >> grade;

    return (grade * 0.25);
}

int main(int argc, char const *argv[])
{
    int result;
    double parciales = averagePartials();
    double cortos = averageCortos();
    double labos = averageLabos();
    double project = gradeProject();

    cout << "Su nota es: " << (parciales + cortos + labos + project) << "\n";
}