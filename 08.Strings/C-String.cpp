#include <iostream>
#include <cstring>

using std::cout;

int main()
{
    char first_name[7]{"Bjarne"}, last_name[11]{"Stroustrup"}, whole_name[17];

    size_t first_name_length{strlen(first_name)}, last_name_length{strlen(last_name)};

    strcpy(whole_name, first_name);
    strcat(whole_name, last_name);

    size_t whole_name_length{strlen(whole_name)};

    cout << "The length of the first name, " << first_name
         << ", is " << first_name_length
         << "\nletters long and the length of the last name, " << last_name
         << ", is " << last_name_length
         << "\nletters long. This means that the length of the whole name must be " << whole_name
         << ", is " << whole_name_length << " letters long.\n";

    return 0;
}