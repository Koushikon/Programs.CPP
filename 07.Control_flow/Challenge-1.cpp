#include <iostream>
using namespace std;

int main()
{
    char letter_grade{};
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        cout << "You need a 90 or above, Study hard." << endl;
        break;
    case 'b':
    case 'B':
        cout << "You need 80-89 for a B, Go study." << endl;
        break;
    case 'c':
    case 'C':
        cout << "You need 70-79 for a average grade." << endl;
        break;
    case 'd':
    case 'D':
        cout << "Hmm, you should strive for a better a grade. All you nedd is 60-69." << endl;
        break;
    case 'f':
    case 'F':
    {
        char confirm{};
        cout << "Are you sure (Y/N): ";
        cin >> confirm;
        if (confirm == 'Y' || confirm == 'y')
            cout << "Ok. I guess you didn't study..." << endl;
        else if (confirm == 'N' || confirm == 'n')
            cout << "Good- go study then" << endl;
        else
            cout << "Illegal choice." << endl;
        break;
    }
    default:
        cout << "Sorry, Not a valid grade." << endl;
        break;
    }
    return 0;
}