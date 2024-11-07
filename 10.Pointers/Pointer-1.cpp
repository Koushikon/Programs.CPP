#include <iostream>

using namespace std;

int main()
{
    // = = = = = = = 1 = = = = = = =
    cout << "= = = = = = = 1 = = = = = = =" << endl;
    int a = 5;
    int *ptr = &a;

    cout << a << endl;    // a's value
    cout << &a << endl;   // a's address
    cout << ptr << endl;  // ptr's value which is a's address
    cout << &ptr << endl; // ptr's address
    // With (*) dereference operator. value at address stored in ptr
    cout << *ptr << endl; // a's value inside ptr's value.

    // = = = = = = = 2 = = = = = = =
    int a1 = 5;

    // Assigning the value of a to b.
    int b1 = a1;

    /***
     * * Assigning the address of b1 to c1.
     * * Assigning int data type variable (b) address to int data type variable (c).
     * * Trying to assign address data to int data type variable, It Gets Error.
     */
    // int c = &b;

    /***
     * * Assigning the address of b1 to ptr1
     * * Assigning the int data type variable (b) address to pointer type variable (ptr1).
     */
    int *ptr1 = &b1;

    // = = = = = = = 3 = = = = = = =
    // Pointer to an integer variable
    int integer1 = 7;
    int *ptr2 = &integer1;
    cout << "size of pointer for int: " << sizeof(ptr2) << endl;

    // Pointer to an character variable
    char char1 = 'C';
    char *ptr3 = &char1;
    cout << "size of pointer for char: " << sizeof(ptr3) << endl;

    // Pointer to an boolean variable
    bool bool1 = false;
    bool *ptr4 = &bool1;
    cout << "size of pointer for bool: " << sizeof(ptr4) << endl;

    // Pointer to an long integer variable
    long longInt = 1665;
    long *ptr5 = &longInt;
    cout << "size of pointer for long int: " << sizeof(ptr5) << endl;

    // Pointer to an short integer variable
    short shortInt = 20;
    short *ptr6 = &shortInt;
    cout << "size of pointer for short int: " << sizeof(ptr6) << endl;

    // = = = = = = = 4 = = = = = = =
    cout << "\n= = = = = = = 4 = = = = = = =" << endl;
    int xyz = 15;
    int pqr = 20;
    int *ptr_xyz = &xyz;
    int *ptr_pqr = &pqr;
    cout << ptr_xyz << endl;
    cout << &ptr_xyz << endl;
    cout << ptr_pqr << endl;
    cout << &ptr_pqr << endl;
    cout << *ptr_xyz << endl;
    cout << *ptr_pqr << endl;

    // = = = = = = = 5 = = = = = = =
    cout << "\n= = = = = = = 5 = = = = = = =" << endl;

    // int *ptr7; // Has Garbage value
    // cout << *ptr7 << endl;

    // To avoid this kind of issue we can set our point value as null pointer
    int *ptr8 = 0;
    int *ptr9{nullptr}; // can use nullptr to initialize a pointer to be a null pointer
    int *ptr10{};       // ptr is a null pointer, and is not holding an address

    cout << *ptr8 << endl;
    cout << *ptr9 << endl;
    cout << *ptr10 << endl;

    return 0;
}