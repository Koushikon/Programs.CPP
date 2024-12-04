#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    bool end{true};

    int max_length{15};
    char name[max_length];

    char predition0[]{"a lot of kids running in the backyard!."};
    char predition1[]{"a lot of empty beer bootles on your work table."};
    char predition2[]{"you partying too much with kids wearing weird clothes."};
    char predition3[]{"you running away from something really scary."};
    char predition4[]{"clouds gathering in the sky and an army standing ready for war."};
    char predition5[]{"dogs running around in a deserted empty city."};
    char predition6[]{"a lot of cars stuck in a terrible traffix "};
    char predition7[]{"you sitting in the dark typing lots of lines of code on your dirty computer."};
    char predition8[]{"you yelling at your boss. and oh no! you get fired."};
    char predition9[]{"you laughing you lungs out. I've never seen this before."};

    cout << "waht's your name dear : " << endl;
    cin.getline(name, max_length);

    while (end)
    {
        srand(time(0));
        int prediction_card{(rand() % 9) + 1};
        switch (prediction_card)
        {
        case 1:
            cout << predition0 << endl;
            break;
        case 2:
            cout << predition1 << endl;
            break;
        case 3:
            cout << predition2 << endl;
            break;
        case 4:
            cout << predition3 << endl;
            break;
        case 5:
            cout << predition4 << endl;
            break;
        case 6:
            cout << predition5 << endl;
            break;
        case 7:
            cout << predition6 << endl;
            break;
        case 8:
            cout << predition7 << endl;
            break;
        case 9:
            cout << predition8 << endl;
            break;
        case 10:
            cout << predition9 << endl;
            break;
        default:
            cout << " Uhh, I don't see anything." << endl;
            break;
        }

        cout << "Do you want me to try again (Y | N) : " << endl;

        char go_on{};
        cin >> go_on;

        end = (go_on == 'Y' || go_on == 'y');
    }

    return 0;
}