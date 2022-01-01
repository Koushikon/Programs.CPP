#include <iostream>
#include <string>

using std::cout;
using std::string;

int main()
{
    string unformatted_full_name{"StephenHawking"};

    string first_name{unformatted_full_name, 0, 7};
    string last_name{unformatted_full_name, 7};

    string formatted_full_name{};
    formatted_full_name = first_name + last_name;
    formatted_full_name.insert(7, " ");

    cout << formatted_full_name;
    return 0;
}