/* C++ 11 Array pass by reference
- https://stackoverflow.com/questions/49357228/c-11-array-pass-by-reference-without-size-in-function
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <array>

using namespace std;

class GradeBook
{
public:
    void changevalues()
    {
        cout << arr2[2] << endl;
        arr2[2] = 2;
        cout << arr2[2] << endl;
    }

    template <typename Arr>
    void passbyref(Arr &refvar) //here 5 I have to mention myself
    {
        auto N = distance(begin(refvar), end(refvar));
        cout << "size is " << N << '\n';
        refvar[2] = 2;
    }

private:
    array<int, 5> arr2;
};

int main()
{

    array<int, 5> grades1{1, 1, 1, 1, 1};
    GradeBook obj1;

    cout << "grades[2] before change =" << grades1[2] << endl;

    obj1.passbyref(grades1);

    cout << "grades[2] after change =" << grades1[2];
    return 0;
}