/*
    ============================================================================
    ENUNCIADO DEL PROGRAMA:
    ----------------------------------------------------------------------------
    Este programa evalúa el desempeño académico de un estudiante basándose en
    la calificación final ingresada (de 0 a 100).

    Dependiendo de la calificación, el programa muestra una clasificación junto con un
    mensaje de retroalimentación para motivar al estudiante.

    Objetivos:
    - Usar condicionales para clasificar el desempeño académico.
    - Trabajar con entrada de datos en formato numérico entero.
    - Proveer retroalimentación al estudiante basada en su desempeño.

    Nota: Este programa evalúa de manera simple el rendimiento basado en rangos de calificaciones.

    Autor: Miguel Rivas
    ============================================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int grade; // Cambié "nota" por "grade"

    // Muestra la cabecera del programa
    cout << "----------------------------------" << endl;
    cout << "  Academic Performance Evaluator" << endl;
    cout << "----------------------------------" << endl;

    // Solicita la calificación final del estudiante
    cout << "Enter your final grade (0 to 100): ";
    cin >> grade;

    // Evalúa el desempeño académico basado en la calificación
    if (grade >= 90 && grade <= 100)
    {
        cout << "Classification: Excellent" << endl;
        cout << "Congratulations! You have demonstrated outstanding mastery of the content." << endl;
    }
    else if (grade >= 80 && grade < 90)
    {
        cout << "Classification: Very Good" << endl;
        cout << "Well done! Just a few details to improve." << endl;
    }
    else if (grade >= 70 && grade < 80)
    {
        cout << "Classification: Good" << endl;
        cout << "Good work, although you could reinforce some topics." << endl;
    }
    else if (grade >= 60 && grade < 70)
    {
        cout << "Classification: Regular" << endl;
        cout << "You're close. We recommend studying more consistently." << endl;
    }
    else if (grade >= 50 && grade < 60)
    {
        cout << "Classification: Insufficient" << endl;
        cout << "You did not reach the minimum score. Don't worry, you can improve!" << endl;
    }
    else if (grade >= 0 && grade < 50)
    {
        cout << "Classification: Failed" << endl;
        cout << "You need to dedicate more time to studying. You can do it!" << endl;
    }
    else
    {
        cout << "Invalid grade. It must be between 0 and 100." << endl;
    }

    // Mensaje de cierre
    cout << "\nThank you for using the evaluation system. Keep pushing yourself!" << endl;

    return 0;
}
