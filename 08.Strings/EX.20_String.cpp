#include <iostream>
#include <string>
using namespace std;

int main()
{

    string journal_entry_1{"Isaac Newton"};
    string journal_entry_2{"Leibniz"};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----

    size_t position{};
    position = journal_entry_1.find(" ");

    journal_entry_1.erase(0, position + 1);

    if (journal_entry_1 > journal_entry_2)
        journal_entry_1.swap(journal_entry_2);

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << journal_entry_1 << "\n"
         << journal_entry_2;
}