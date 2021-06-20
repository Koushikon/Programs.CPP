// C++ program to check the size of 'long'  
// data type  
#include<iostream>
#include <climits> 
using namespace std; 
  
int main()  
{ 
    cout << "sizeof information wih cfloat & climits" << "\n========================" << endl;

    cout << "Size of char = "<< sizeof(char) << " in bytes" << endl;  
    cout << "Size of unsigned int = "<< sizeof(unsigned int) << " in bytes" << endl;  
    cout << "Size of int = "<< sizeof(int) << " in bytes" << endl;  
    cout << "Size of short = "<< sizeof(short) << " in bytes" << endl;  
    cout << "Size of long = "<< sizeof(long) << " in bytes" << endl;  
    cout << "Size of long long = "<< sizeof(long long) << " in bytes" << endl;

    cout << "Size of float = "<< sizeof(float) << " in bytes" << endl;  
    cout << "Size of double = "<< sizeof(double) << " in bytes" << endl;  
    cout << "Size of long double = "<< sizeof(long double) << " in bytes" << endl;  

    cout << "\n\tsizeof Used with Variable Name" << "\n========================" << endl;
    int age {21};
    cout << "| size of age = " << sizeof(age) << " or " << sizeof age << " in bytes" << endl;  
    double wage {22.27};
    cout << "| size of age = " << sizeof(wage) << " or " << sizeof wage << " in bytes" << endl;  


    cout << "\n\nuse values defined in <climits>" << "\n========================" << endl;

    cout << "\t---------Minimum Values---------" << endl;
    cout << "| char = "<< CHAR_MIN << endl;
    cout << "| short = " << SHRT_MIN << endl;  
    cout << "| int = " << INT_MIN <<endl;    
    cout << "| long = " << LONG_MIN << endl;  
    cout << "| long long = " << LLONG_MIN <<endl;  

    cout << "\n\t--------Maximum Values--------" << endl;
    cout << "| char = "<< CHAR_MAX << endl;
    cout << "| short = " << SHRT_MAX << endl;  
    cout << "| int = " << INT_MAX <<endl;    
    cout << "| long = " << LONG_MAX << endl;  
    cout << "| long long = " << LLONG_MAX <<endl;  

    cout << "\n\t------------------------------" << endl;
    return 0;
}