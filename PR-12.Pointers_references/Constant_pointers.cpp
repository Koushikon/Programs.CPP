// Pointers to constants, Constant Pointers and Constant Pointers constants
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int high_score{177}, low_score{32};

    // Pointers to constants
    const int *score_1{&high_score};

    cout << "Old: " << *score_1;
    // The data pointed to by pointers is contant can't be changed.
    // *score_1 = 507;
    // Here we can change what pointer points to.
    score_1 = &low_score;
    cout << "\t New: " << *score_1 << endl;

    // Constant Pointers
    int *const score_2{&high_score};

    cout << "Old: " << *score_2;
    // Here with Contant Pointers we can change the data is point to.
    *score_2 = 507;
    // But, In this case we can't change what pointer points to meaning can't point somewhere else.
    // score_2 = &low_score;
    cout << "\t New: " << *score_2 << endl;

    // Constant Pointers constants
    const int *const score_3{&high_score};

    cout << "Old: " << *score_3;
    // The data pointed to by pointers is contant can't be changed.
    // *score_3 = 507;
    // But, In this case we can't change what pointer points to meaning can't point somewhere else.
    // score_3 = &low_score;
    cout << "\t New: " << *score_3 << endl;
    return 0;
}