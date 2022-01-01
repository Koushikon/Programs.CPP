#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string pyramid_word{};
    cout << "Enter pyramid words: ";
    cin >> pyramid_word;

    size_t size{pyramid_word.size()};

    cout << "= = = = = = = = =\n\n";
    // Print the pyramid
    for (size_t i{}; i < size; ++i)
    {
        for (size_t s{size - i - 1}; s > 0; --s)
            cout << "  ";

        size_t middle{(i * 2) / 2};
        for (size_t j = 0; j <= middle; ++j)
            cout << pyramid_word.at(j) << " ";

        for (size_t j = middle; j > 0; --j)
            cout << pyramid_word.at(j - 1) << " ";
        cout << "\n";
    }
    cout << "\n= = = = X = = = =\n";

    return 0;
}