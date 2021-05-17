#include <iostream>
#include <vector>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::vector;

void print_numbers(const vector<int> &number);
void add_number(vector<int> &number);
void remove_number(vector<int> &number);
void mean_os_numbers(const vector<int> &number);
void max_number(const vector<int> &number);
void min_number(const vector<int> &number);

void print_numbers(const vector<int> &number)
{
    cout << "\t| ";
    for (auto &value : number)
        cout << value << " | ";
    cout << endl
         << endl;
}

void add_number(vector<int> &number)
{
    int input{};
    cout << "\tEnter the value you want to add: ";
    cin >> input;

    number.push_back(input);
    cout << input << " Added sucessfully." << endl
         << endl;
}

void remove_number(vector<int> &number)
{
    if (number.size() == 0)
        cout << "\tArray list is Empty, Nothing to Remove.\n"
             << endl;
    else
    {
        int index{};
        index = number.size() - 1;

        cout << "\t" << number.at(index);
        number.pop_back();
        cout << " Removed sucessfully." << endl
             << endl;
    }
}

void mean_os_numbers(const vector<int> &number)
{
    print_numbers(number);

    int sum{};
    double mean{};

    for (auto &value : number)
        sum += value;

    mean = static_cast<double>(sum) / number.size();
    cout << "\tThe Total is: " << sum << endl
         << fixed << setprecision(2) << "\tThe mean is: " << mean << endl
         << endl;
}

void max_number(const vector<int> &number)
{
    int largest = number.at(0);

    for (auto &value : number)
        if (value >= largest)
            largest = value;

    cout << "\tThe Maximum number is: " << largest << " among these..." << endl;
    print_numbers(number);
}

void min_number(const vector<int> &number)
{
    int smallest = number.at(0);

    for (auto &value : number)
        if (value <= smallest)
            smallest = value;

    cout << "\tThe Minimum number is: " << smallest << " among these..." << endl;
    print_numbers(number);
}

int main()
{
    char menu{};
    vector<int> num{20, 10, 15, 25};

    do
    {
        cout << "=====================" << endl
             << "| Press P >> To print numbers." << endl
             << "| Press A >> To Add a number." << endl
             << "| Press R >> To remove the last number." << endl
             << "| Press T or M >> To display the Total & Mean of the numbers." << endl
             << "| Press S >> To display the smallest number." << endl
             << "| Press L >> To display the largest number." << endl
             << "| Press Q >> To quit." << endl
             << "| So, Choose an option - ";
        cin >> menu;

        switch (menu)
        {
        case 'p':
        case 'P':
            print_numbers(num);
            break;

        case 'a':
        case 'A':
            add_number(num);
            break;

        case 'r':
        case 'R':
            remove_number(num);
            break;

        case 't':
        case 'T':
        case 'm':
        case 'M':
            mean_os_numbers(num);
            break;

        case 's':
        case 'S':
            min_number(num);
            break;

        case 'l':
        case 'L':
            max_number(num);
            break;

        case 'q':
        case 'Q':
            cout << "\tGood bye..." << endl;
            break;

        default:
            cout << "Unknown selection, Please try again." << endl;
            break;
        }
    } while (menu != 'q' && menu != 'Q');
    // Our motive is achive false from both.

    return 0;
}