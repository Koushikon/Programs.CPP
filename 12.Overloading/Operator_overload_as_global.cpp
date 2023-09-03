#include <iostream>
#include <cstring>
#include <vector>

using std::cout;
using std::vector;

class MyString
{
    char *data; // Pointer to a char[] that holds C-style string

public:
    MyString();                       // Default Constructor...
    MyString(const char *s);          // One-Args Constructor...
    MyString(const MyString &source); // Copy Constructor...
    MyString(MyString &&source);      // Move Constructor...
    ~MyString();                      // Destructor...

    // Operator overloads
    MyString operator=(const MyString &rhs);
    MyString operator=(MyString &&rhs);

    // Friend functions
    friend MyString operator-(const MyString &obj);
    friend bool operator==(const MyString &lhs, const MyString &rhs);
    friend MyString operator+(const MyString &lhs, const MyString &rhs);

    void display();         // Printing Output
    const int get_length(); // Getting length
    const char *get_str();  // Getting C-style string
};

// Default Constructor
MyString::MyString() : data{nullptr}
{
    data = new char[1];
    *data = '\0';
}

// One-Args Constructor
MyString::MyString(const char *s) : data{nullptr}
{
    if (s == nullptr)
    {
        data = new char[1];
        *data = '\0';
    }
    else
    {
        data = new char[std::strlen(s) + 1];
        std::strcpy(data, s);
    }
}

MyString::MyString(const MyString &source) : data{nullptr}
{
    data = new char[std::strlen(source.data) + 1];
    std::strcpy(data, source.data);
    cout << "[*] Copy Constructor ->" << data << "\n";
}

MyString::MyString(MyString &&source) : data{source.data}
{
    source.data = nullptr;
    cout << "[*] Move Constructor ->" << data << "\n";
}

MyString::~MyString()
{
    // cout << "Destructor calling...\n";
    delete[] data;
}

MyString MyString::operator=(const MyString &rhs)
{
    cout << "[*] Copy Assignment Operator\n";
    if (this == &rhs)
        return *this;
    delete[] this->data;
    data = new char[std::strlen(rhs.data) + 1];
    std::strcpy(data, rhs.data);
    return *this;
}

MyString MyString::operator=(MyString &&rhs)
{
    cout << "[*] Move Assignment Operator\n";
    if (this == &rhs)
        return *this;
    delete[] this->data;
    data = new char[std::strlen(rhs.data) + 1];
    data = rhs.data;
    rhs.data = nullptr;
    return *this;
}

MyString operator-(const MyString &obj)
{
    cout << "[*] Operator - for Lower Global\n";
    char *buff = new char[std::strlen(obj.data) + 1];
    for (size_t i{}; i < std::strlen(obj.data); ++i)
        buff[i] = std::tolower(obj.data[i]);
    MyString temp{buff};
    delete[] buff;
    return temp;
}

bool operator==(const MyString &lhs, const MyString &rhs)
{
    cout << "[*] Operator == Comparision Global\n";
    return (std::strcmp(lhs.data, rhs.data) == 0);
}

MyString operator+(const MyString &lhs, const MyString &rhs)
{
    cout << "[*] Operator + Concat  Global\n";
    char *buff = new char[std::strlen(lhs.data) + std::strlen(rhs.data) + 1];
    strcpy(buff, lhs.data);
    strcat(buff, rhs.data);
    MyString temp{buff};
    delete[] buff;
    return temp;
}

void MyString::display()
{
    cout << "The string is " << get_str() << ", length is " << get_length() << "\n";
}

const int MyString::get_length()
{
    return std::strlen(data);
}

const char *MyString::get_str()
{
    return data;
}

int main()
{
    // MyString ms1{"o"};
    // MyString ms2{ms1};
    // ms2.display();

    // cout << "\n";

    // MyString ms3;
    // ms3 = ms1;
    // ms3.display();
    // ms3 = "First time shopping";
    // ms3.display();

    // cout << "\n";

    MyString ms4{"harry"};
    MyString ms5;
    ms5 = -ms4;
    ms5.display();

    if (ms4 == ms5)
        cout << "The same\n";
    else
        cout << "Not the same\n";

    ms5 = ms4 + " Gone " + ms5;
    ms5.display();

    ms5 = " Gone " + ms5; // OK This time, contant literals can't be object type
    ms5.display();

    return 0;
}