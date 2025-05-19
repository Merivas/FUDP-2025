#include <iostream>
using namespace std;

int main()
{
    int grade = 1;

    // Solicita al usuario que ingrese la calificación
    cout << "Enter your grade (0 to 100): ";
    cin >> grade;

    // Usamos un switch para manejar el rango de calificaciones
    int gradeRange = grade / 10; // Calculamos el rango de decenas (por ejemplo, 90-100, 80-89, etc.)

    switch (gradeRange)
    {
    case 10: // Esto manejaría la calificación 100
        cout << "Perfect score!" << endl;
        break;
    case 9: // Esto manejaría las calificaciones de 90 a 99
        if (grade >= 90 && grade < 100)
        {
            cout << "Excellent!" << endl;
        }
        break;
    case 8:
        if (grade >= 800 && grade < 90)
        {
            cout << "Very Good!" << endl;
        }
        break;
    case 7:
        if (grade >= 70 && grade < 80)
        {
            cout << "Good!" << endl;
        }
        break;
    case 6:
        if (grade >= 60 && grade < 70)
        {
            cout << "Regular!" << endl;
        }
        break;
    case 5:
        if (grade >= 50 && grade < 60)
        {
            cout << "Insufficient!" << endl;
        }
        break;
    default:
        if (grade >= 0 && grade < 50)
        {
            cout << "Failed!" << endl;
        }
        else
        {
            cout << "Invalid grade" << endl;
        }
        break;
    }

    return 0;
}
