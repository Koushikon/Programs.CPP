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

    // Overloaded
    MyString &operator=(const MyString &rhs); // Assignment Copy operator
    MyString &operator=(MyString &&rhs);      // Assignment Move operator

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
    cout << data << " Copy Constructor...\n";
}

MyString::MyString(MyString &&source) : data{source.data}
{
    source.data = nullptr;
    cout << data << " Move Constructor...\n";
}

MyString::~MyString()
{
    // cout << "Destructor calling...\n";
    delete[] data;
}

MyString &MyString::operator=(const MyString &rhs)
{
    cout << "Copy-Assignment operator\n";
    if (this == &rhs)
        return *this;
    delete[] this->data;
    data = new char[std::strlen(rhs.data) + 1];
    std::strcpy(data, rhs.data);
    return *this;
}

MyString &MyString::operator=(MyString &&rhs)
{
    cout << "Move-Assignment operator\n";
    if (this == &rhs)
        return *this;
    delete[] this->data;
    data = new char[std::strlen(rhs.data) + 1];
    data = rhs.data;
    rhs.data = nullptr;
    return *this;
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
    MyString ms1;
    ms1.display();

    MyString ms2{"Joy"};
    ms2.display();

    cout << "\n";

    MyString ms3;
    ms3 = ms2;
    ms3.display();
    ms3 = "Shally";
    ms3.display();
    cout << "\n";

    vector<MyString> vec;
    vec.push_back("Second time");
    vec.at(0).display();

    return 0;
}