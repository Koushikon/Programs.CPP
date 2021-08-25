#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

string print_guest_list(const string guest_list[], size_t guest_list_size);
void clear_guest_list(string guest_list[], size_t guest_list_size);

int main()
{

    string guest_list[]{"Larry", "Moe", "Curly"};
    size_t guest_list_size{3};
    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);

    return 0;
}

string print_guest_list(const string guest_list[], size_t guest_list_size)
{
    for (size_t i{}; i < guest_list_size; ++i)
        cout << guest_list[i] << endl;
    return typeid(guest_list).name();
}

void clear_guest_list(string guest_list[], size_t guest_list_size)
{
    for (size_t i{}; i < guest_list_size; ++i)
        guest_list[i] = " ";
}