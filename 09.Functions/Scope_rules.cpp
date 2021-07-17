#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// Function Prototypes
void global_scope();
void local_scope();
void static_local_scope();

// Global Variable: declared outside any class or function.
// Obviously it preserves the value if we change it, But that's global;
int september{30};

void global_scope()
{
    cout << "Global september days are: " << september << endl;
    september *= 1.5;
    cout << "On Change, Global september days are: " << september << endl;
}

void local_scope(int number)
{
    int sort{7000};
    cout << "local sort is: " << sort << endl;

    sort = number;
    cout << "On Change, local sort is: " << sort << endl;
}

void static_local_scope()
{
    static double calsium{57.5};

    cout << "local_static calsium value is: " << calsium << endl;

    calsium -= 30;
    cout << "On Change, local_static calsium value is:: " << calsium << endl;
}

int main()
{
    int num1{111}, num2{222};
    cout << "local num1 is: " << num1 << " in purely main." << endl;
    {
        // Local to this inner scope
        int num1{300};
        cout << "local num1 is : " << num1 << " in inner scope." << endl;
        cout << "local num2 is: " << num2 << " in inner scope." << endl;
    }
    cout << "local num1 is still : " << num1 << " in purely main." << endl
         << endl;

    local_scope(10);
    local_scope(20);

    cout << endl;
    global_scope();
    global_scope();

    cout << endl;
    static_local_scope();
    static_local_scope();
    static_local_scope();

    return 0;
}