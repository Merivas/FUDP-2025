/*
    ============================================================================
    PROGRAM STATEMENT:
    ----------------------------------------------------------------------------
    This program asks the user to enter a numeric grade between 0 and 100.
    Based on the value entered, the program will classify the grade into one
    of the following categories:

        - Excellent       : 91 - 100
        - Very Good       : 81 - 90
        - Good            : 71 - 80
        - Fair            : 61 - 70
        - Insufficient    : 51 - 60
        - Failed          : 0  - 50

    According to the category, a personalized message will be displayed, 
    indicating whether the student passed or failed, along with motivational feedback.

    At the end, the program thanks the user for using it.

    Objectives:
    - Practice the use of conditional structures (if, else if, else).
    - Validate input ranges and give user feedback.
    - Use logical operators and console output.

    Author: Miguel Rivas
    ============================================================================
*/

#include <iostream>

using namespace std;

int main()
{
    int note = 0;

    // Ask user for their grade
    cout << "Insert your grade (0-100): ";
    cin >> note;

    // Evaluate the grade and display the corresponding message
    if (note >= 91 && note <= 100)
    {
        cout << "Your grade is Excellent: " << note << ". You are approved." << endl;
        cout << "Congrats! You have an excellent score!" << endl;
    }
    else if (note >= 81 && note <= 90)
    {
        cout << "Your grade is Very Good: " << note << ". You are approved." << endl;
        cout << "You're doing great, keep it up!" << endl;
    }
    else if (note >= 71 && note <= 80)
    {
        cout << "Your grade is Good: " << note << ". You are approved." << endl;
        cout << "Good job, but you can still improve." << endl;
    }
    else if (note >= 61 && note <= 70)
    {
        cout << "Your grade is Fair: " << note << ". You are approved." << endl;
        cout << "You can do better! Just pay attention and study more." << endl;
    }
    else if (note >= 51 && note <= 60)
    {
        cout << "Your grade is Insufficient: " << note << ". You are not approved." << endl;
        cout << "Don't worry, it's just a setback. Try harder next time." << endl;
    }
    else if (note >= 0 && note <= 50)
    {
        cout << "Your grade is " << note << ". You have failed." << endl;
        cout << "Do your best next time!" << endl;
    }
    else
    {
        // Invalid input (outside expected range)
        cout << "Invalid input. Please enter a grade between 0 and 100." << endl;
    }

    // Farewell message
    cout << "Thanks for using this program. See you soon!" << endl;

    return 0;
}
