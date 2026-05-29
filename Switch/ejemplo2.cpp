#include <iostream>
using namespace std;

int main()
{
    int grade = 1;
    

    // Solicita al usuario que ingrese la calificación
    cout << "Enter your grade (0 to 100): ";
    cin >> grade;

    // Usamos un switch para manejar el rango de calificaciones
    int gradeRange = grade ; // Calculamos el rango de decenas (por ejemplo, 90-100, 80-89, etc.)

    switch (gradeRange)
    {
    case 100: // Esto manejaría la calificación 100
        cout << "Perfect score!" << endl;
        int variable1= 88;
        break;
    case 90: // Esto manejaría las calificaciones de 90 a 99
        if (grade >= 90 && grade < 100)
        {
            cout << "Excellent!" << endl;
        }
        break;
    case 91:
    cout<<"tu nota es de "<< grade ;
    break;

    case 80:
        if (grade >= 80 && grade < 90)
        {
            cout << "Very Good!" << endl;
        }
        break;
    case 70:
        if (grade >= 70 && grade < 80)
        {
            cout << "Good!" << endl;
        }
        break;
    case 60:
        if (grade >= 60 && grade < 70)
        {
            cout << "Regular!" << endl;
        }
        break;
    case 50:
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
