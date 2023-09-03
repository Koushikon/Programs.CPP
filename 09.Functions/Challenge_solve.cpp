#include <iostream>
#include <vector>
#include <iomanip>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;
using std::vector;

void disp_menu();
char take_input();
void list_is_empty(string word);

void print_numbers(const vector<int> &number);
void add_number(vector<int> &number);
void remove_number(vector<int> &number);
void find_number(const vector<int> &number);
void mean_os_numbers(const vector<int> &number);
void max_number(const vector<int> &number);
void min_number(const vector<int> &number);
void leave();
void default_selection();

int main()
{
    char menu{};
    vector<int> num{20, 10, 15, 25};

    do
    {
        disp_menu();
        menu = take_input();

        switch (menu)
        {
        case 'P':
            print_numbers(num);
            break;

        case 'A':
            add_number(num);
            break;

        case 'R':
            remove_number(num);
            break;

        case 'F':
            find_number(num);
            break;

        case 'T':
        case 'M':
            mean_os_numbers(num);
            break;

        case 'S':
            min_number(num);
            break;

        case 'L':
            max_number(num);
            break;

        case 'Q':
            leave();
            break;

        default:
            default_selection();
            break;
        }
    } while (menu != 'Q');
    // Our motive is achive false from both.

    return 0;
}

void disp_menu()
{
    cout << "\n\n==========================" << endl
         << "| Press," << endl
         << "|\tP-- >> To print numbers." << endl
         << "|\tA -->> To Add a number." << endl
         << "|\tR -->> To remove the last number." << endl
         << "|\tF -->> To find the number you want" << endl
         << "|\tT or M -->> To display the Total & Mean of the numbers." << endl
         << "|\tS -->> To display the smallest number." << endl
         << "|\tL -->> To display the largest number." << endl
         << "|\tQ -->> To quit." << endl
         << "| \tSo, What's your choice? ";
}

char take_input()
{
    char input{};
    cin >> input;
    return toupper(input);
}

void list_is_empty(string word = "show.")
{
    cout << "\tArray list is Empty, Nothing to " << word;
}

// Operations
void print_numbers(const vector<int> &number)
{
    if (number.size() == 0)
        list_is_empty();
    else
    {
        cout << "\t| ";
        for (auto &value : number)
            cout << value << " | ";
    }
}

void add_number(vector<int> &number)
{
    int input{};
    cout << "\tEnter the value you want to add: ";
    cin >> input;

    number.push_back(input);
    cout << "\t" << input << " Added sucessfully.";
}

void remove_number(vector<int> &number)
{
    if (number.size() == 0)
        list_is_empty("remove.");
    else
    {
        int index{};
        index = number.size() - 1;

        cout << "\t" << number.at(index);
        number.pop_back();
        cout << " Removed sucessfully.";
    }
}

void find_number(const vector<int> &number)
{
    if (number.size() == 0)
        list_is_empty("find.");
    else
    {
        int target{};
        cout << "\tEnter the value you want to find? - ";
        cin >> target;

        bool status{false};
        for (auto &value : number)
            if (value == target)
                status = true;

        cout << "\t" << target << ((status) ? " was found." : " was not found.");
    }
}

void mean_os_numbers(const vector<int> &number)
{
    int sum{};
    double mean{};

    if (number.size() == 0)
        list_is_empty();
    else
    {
        print_numbers(number);
        for (auto &value : number)
            sum += value;
        mean = static_cast<double>(sum) / number.size();

        cout << "\n\tThe Total is: " << sum << endl
             << fixed << setprecision(2) << "\tThe mean is: " << mean;
    }
}

void max_number(const vector<int> &number)
{
    if (number.size() == 0)
        list_is_empty();
    else
    {
        int largest = number.at(0);

        for (auto &value : number)
            if (value >= largest)
                largest = value;

        cout << "\tThe Maximum number is: " << largest << " among these..." << endl;
        print_numbers(number);
    }
}

void min_number(const vector<int> &number)
{
    if (number.size() == 0)
        list_is_empty();
    else
    {
        int smallest = number.at(0);

        for (auto &value : number)
            if (value <= smallest)
                smallest = value;

        cout << "\tThe Minimum number is: " << smallest << " among these..." << endl;
        print_numbers(number);
    }
}

void leave()
{
    cout << "\tGood bye..." << endl;
}

void default_selection()
{
    cout << "\tUnknown selection, Please try again.";
}