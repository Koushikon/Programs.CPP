#include <iostream>
#include <string>

using namespace std;

void print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3);
void clear_guest_list(string &guest_1, string &guest_2, string &guest_3);

int main()
{

    string guest_1{"Larry"};
    string guest_2{"Moe"};
    string guest_3{"Curly"};

    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);

    return 0;
}

void print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3)
{
    cout << guest_1 << "\n"
         << guest_2 << "\n"
         << guest_3 << "\n";
}

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3)
{
    guest_1 = " ";
    guest_2 = " ";
    guest_3 = " ";
}