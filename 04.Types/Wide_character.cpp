// An example C++ program to demonstrate use
// of wchar_t in array
#include <iostream>
using namespace std;

int main()
{
    /*************
     * Wide character type
    *************/

    wchar_t w{L'O'};
    std::wcout << w << " and " << sizeof(w) << std::endl;

    // char type array string
    char caname[]{"GFG"};
    std::cout << caname << std::endl;

    // wide-char type array string
    wchar_t waname[]{L"GFG"};
    std::wcout << waname << std::endl;

    wchar_t waname2[]{L"GFG"};
    wchar_t wacopy[14];
    wcscpy(wacopy, waname2);
    wcout << L"Original = " << waname2
          << L"\nCopy =  " << wacopy << endl;

    return 0;
}
