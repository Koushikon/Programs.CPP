#include <iostream>
#include <string>
#include <vector>

using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
     // Integer, double, char type pointer declaration without initialization
     int *int_ptr1;
     double *double_ptr1;
     char *char_ptr1;

     // Integer, double, string type pointer declaration with initialization
     int *int_ptr2{};
     double *double_ptr2{};
     string *string_ptr1{};

     // The size of a pointer is depends upon underlyling processros.
     // Like for 32bit -> is 4 byte and 64Bit -> is 8 byte.
     cout << "Size of int pointer is: " << sizeof(int_ptr1) << endl;
     cout << "Size of double pointer is: " << sizeof(double_ptr1) << endl;
     cout << "Size of char pointer is: " << sizeof(char_ptr1) << endl;
     cout << "Size of string pointer is: " << sizeof(string_ptr1) << endl;
     cout << "===============\n"
          << endl;

     // Normal integer variable
     int number{17};
     cout << "Value of this variable is: " << number << endl;
     cout << "Address of this variable is: " << &number << endl;
     cout << endl;

     // Integer Pointer variable
     int *int_ptr3;
     cout << "value of this pointer is: " << int_ptr3 << endl;
     cout << "Address of this pointer is: " << &int_ptr3 << endl;
     // We could initialize the pointer with {},i.e. 0 or nullptr,i.e. points nowwhere.
     int_ptr3 = nullptr;
     cout << "value of this pointer is: " << int_ptr3 << endl;
     cout << "===============\n"
          << endl;

     int *dart1{nullptr};
     int *dart2{0};
     double *dart3{nullptr};
     char *dart4{nullptr};
     string *dart5{nullptr};
     vector<int> *dart6{nullptr};
     vector<string> *dart7{nullptr};

     cout << "value of dart1 is: " << dart1 << endl;
     cout << "value of dart2 is: " << dart2 << endl;
     cout << "value of dart3 is: " << dart3 << endl;
     // cout << "value of dart4 is: " << dart4 << endl;
     // cout << "value of dart5 is: " << dart5 << endl;
     cout << "===============\n"
          << endl;

     int score{107};
     double temparature{37.3};

     int *score_ptr1{&score}; // Use it like this
     double *score_ptr2{};    // Or use it like this
     score_ptr2 = &temparature;

     // Here the value of this pointers are those variables addresses, what we initialize.
     cout << "value of score_ptr1 is: " << score_ptr1 << endl;
     cout << "value of score_ptr2 is: " << score_ptr2 << endl;

     // We could check out if that variable address and pointers value is same or not.
     cout << boolalpha;
     cout << "value of score_ptr1 & score address is equal: " << (score_ptr1 == &score) << endl;
     cout << "value of score_ptr2 & temparature address is equal: " << (score_ptr2 == &temparature) << endl;
     // Yup, those are same Understand.

     // score_ptr1 = temparature;
     // Error, cannot convert 'double' to 'int*' in assignment

     cout << "===============\n"
          << endl;

     int number7{77};
     int *pNumber = &number7;
     // Declare and assign the address of variable number to pointer pNumber.
     cout << pNumber << endl;  // Print the content of the pointer variable, which contain an address.
     cout << *pNumber << endl; // Print the value "pointed to" by the pointer, which is an int (77).

     // Assign a value to where the pointer is pointed to, NOT to the pointer variable.
     *pNumber = 99;
     // Print the new value "pointed to" by the pointer (99).
     // The value of variable number changes as well (99).
     cout << *pNumber << " and " << number7 << endl
          << endl;

     int another_num{701};
     pNumber = &another_num;
     // Print the new variable's address "pointed to" by the pointer.
     // The pointed variable's value(701).
     cout << pNumber << " and " << *pNumber << endl;

     cout << "===============\n"
          << endl;

     double high_temp{100.7};
     double low_temp{37.4};

     double *temp_prt{&high_temp};

     cout << "High temparature: " << *temp_prt << endl;
     // When we re-initialize the pointer we use Pointer name not what it points to.
     temp_prt = &low_temp;
     cout << "Low temparature: " << *temp_prt << endl;
     cout << "===============\n"
          << endl;

     string name{"Frank"};
     string *string_pointer{&name};

     cout << *string_pointer << endl;
     *string_pointer = "James";
     cout << *string_pointer << endl;
     cout << "===============\n"
          << endl;

     vector<string> stooges{"Lena", "Bela", "Birak", "Omkas"};
     vector<string> *vector_ptr{nullptr};

     vector_ptr = &stooges;

     /* This won't work because we want to De-reference the pointer before '.'
     Also, It has higher precedence than the '*' operator.*/
     // cout << "First stooge: " << *vector_ptr.at(0) << endl;

     cout << "First stooge: " << (*vector_ptr).at(0) << endl;

     cout << "Stooges: ";
     for (auto &stooge : *vector_ptr)
          cout << stooge << " ";
     cout << endl;
     cout << "===============\n";

     return 0;
}