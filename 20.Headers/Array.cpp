#include <iostream>
#include <array>
#include <tuple>

using std::array;
using std::cout;
using std::endl;
using std::get;

int main()
{
     array<int, 5> arr = {1, 2, 3, 4, 5};

     cout << "Number of elements in array is " << arr.size() << "\n"
          << "Maximum number of elements array can hold is " << arr.max_size() << "\n\n";

     cout << "C-style Access index 1 is " << arr[1] << "\n"
          << "C-style Access index 2 is " << arr[2] << "\n";

     cout << "Array class style index 1 is " << arr.at(1) << "\n"
          << "Array class style index 2 is " << arr.at(2) << "\n";

     cout << "Tuple class style index 1 is " << get<1>(arr) << "\n"
          << "Tuple class style index 2 is " << get<2>(arr) << "\n\n";

     cout << "Array first element is " << arr.front() << "\n";
     cout << "Array last element is " << arr.back() << "\n\n";

     cout << "Check the array is empty or not is " << std::boolalpha << arr.empty() << "\n";

     arr.fill(7);
     cout << "Array class style index 1 is " << arr.at(1) << "\n"
          << "Array class style index 2 is " << arr.at(2) << "\n";
     cout << "Number of elements in array is " << arr.size() << "\n\n";

     array<int, 5> arr2 = {1, 2, 3, 4, 5};
     arr2.swap(arr);
     cout << "Array 2 index 1 is " << arr2.at(1) << "\n"
          << "Array 2 index 2 is " << arr2.at(2) << "\n";
     cout << "Array 1 index 1 is " << arr.at(1) << "\n"
          << "Array 1 index 2 is " << arr.at(2) << "\n";

     const char *word;
     array<char, 5> arr3 = {'a', 'b', 'c', 'd', 'e'};

     word = arr3.data();

     cout << "\nArray 3 is " << word << "\n";

     return 0;
}