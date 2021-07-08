// CPP code to illustrate
// std::string::data()

#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::strcpy;
using std::string;

int main()
{
    {
        string str1{"ShutDown"};
        char *chr1;

        cout << "String: " << str1 << " Length: " << str1.size() << endl;
        chr1 = str1.data();
        cout << "String: " << chr1 << " Length: " << strlen(chr1) << endl;
    }

    string str2{"Hello world!"};
    char chr2[20];

    strcpy(chr2, data(str2));
    cout << chr2 << endl;

    {
        string str1{"Golem"};
        char *chr3{nullptr};
        chr3 = data(str1);
        cout << chr3 << endl;
    }

    return 0;
}
