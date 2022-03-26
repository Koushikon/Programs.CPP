#include <iostream>
using namespace std;

int main()
{
    char letter_grade{'b'};
    // cout << "Enter the letter grade you expect on the exam: ";
    // cin >> letter_grade;

    switch (tolower(letter_grade))
    {
    case 'a':
        cout << "You need a 90 or above, Study hard." << endl;
        break;
    case 'b':
        cout << "You need 80-89 for a B, Go study." << endl;
        break;
    case 'c':
        cout << "You need 70-79 for a average grade." << endl;
        break;
    case 'd':
        cout << "Hmm, you should strive for a better a grade. All you nedd is 60-69." << endl;
        break;
    case 'f':
        cout << "You failed." << endl;
    default:
        cout << "Sorry, Not a valid grade." << endl;
        break;
    }

    /**
     * * Switch with initializer
     * ? This variable remains on whole switch scope
     * ? i.e. In every case
     */
    switch (const char grade{'C'}; tolower(grade))
    {
        // Its not recommanded to declare a variable outside any "case"
        // Also there are many rules for that
    case 'a':
        cout << "You need a 90 or above, Study hard." << endl;
        break;
    case 'b':
        cout << "You need 80-89 for a B, Go study." << endl;
        break;
    case 'c':
        cout << "You need 70-79 for a average grade." << endl;
        break;
    case 'd':
        cout << "Hmm, you should strive for a better a grade. All you nedd is 60-69." << endl;
        break;
    case 'f':
        cout << "You failed." << endl;
    default:
        cout << "Sorry, Not a valid grade." << endl;
        break;
    }

    return 0;
}