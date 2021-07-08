// https://stackoverflow.com/questions/6946217/how-to-access-the-contents-of-a-vector-from-a-pointer-to-the-vector-in-c

// Ways of access vector contents from a pointer

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> *v = new vector<int>(10);
    cout << v->at(2) << endl; //Retrieve using pointer to member

    cout << v->operator[](2) << endl; //Retrieve using pointer to operator member

    cout << v->size() << endl; //Retrieve size

    vector<int> &vr = *v; //Create a reference

    cout << vr[2] << endl; //Normal access through reference

    delete &vr; //Delete the reference. You could do the same with
                //a pointer (but not both!)
}