#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int scores[]{106, 37, 42};
    cout << scores << endl;
    cout << *scores << endl;

    int *scores_ptr{nullptr};
    scores_ptr = scores;
    cout << scores_ptr << endl;
    cout << *scores_ptr << endl;

    cout << "================Different notations" << endl;

    cout << "Array Subscript: " << scores[0] << "\t" << scores[1] << "\t" << scores[2] << endl;
    cout << "Pointer Subscript: " << scores_ptr[0] << "\t" << scores_ptr[1] << "\t" << scores_ptr[2] << endl;

    cout << endl;

    cout << "Array Offset: " << *scores << "\t" << *(scores + 1) << "\t" << *(scores + 2) << endl;
    cout << "Pointer Offset: " << *scores_ptr << "\t" << *(scores_ptr + 1) << "\t" << *(scores_ptr + 2) << endl;

    return 0;
}