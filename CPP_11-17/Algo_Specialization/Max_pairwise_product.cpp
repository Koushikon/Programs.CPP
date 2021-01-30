#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int getNumber(int number, int min_input, int max_input)
{
    do
    {
        cin >> number;
    } while (number > max_input || number < min_input);

    return number;
}

long long maxPairwiseProduct_1(const vector<int> arr)
{
    long long product{};
    for (int i{}; i < arr.size() - 1; ++i)
    {
        for (int j{i + 1}; j < arr.size(); ++j)
        {
            if (static_cast<long long>(arr.at(i)) * arr.at(j) > product)
                product = static_cast<long long>(arr.at(i)) * arr.at(j);
        }
    }
    return product;
}

long long maxPairwiseProduct_2(const vector<int> arr)
{
    int maxIndex_1{-1};

    for (int i{}; i < arr.size(); ++i)
    {
        if ((maxIndex_1 == -1) || (arr.at(i) > arr.at(maxIndex_1)))
            maxIndex_1 = i;
    }

    int maxIndex_2{-1};
    for (int j{}; j < arr.size(); ++j)
    {
        if ((arr.at(j) != arr.at(maxIndex_1)) && ((maxIndex_2 == -1) || (arr.at(j) > arr.at(maxIndex_2))))
            maxIndex_2 = j;
    }

    // cout << arr.at(maxIndex_1) <<" - " << arr.at(maxIndex_2);
    return (static_cast<long long>(arr.at(maxIndex_1)) * arr.at(maxIndex_2));
}

int bubbleSort(vector<int> &arr)
{
    for (int i{}; i < arr.size() - 1; ++i)
    {
        for (int j{}; j < arr.size() - i - 1; ++j)
        {
            if (arr.at(j) > arr.at(j + 1))
            {
                arr.at(j + 1) += arr.at(j);
                arr.at(j) = arr.at(j + 1) - arr.at(j);
                arr.at(j + 1) -= arr.at(j);
            }
        }
    }
    return 0;
}

int main()
{
    int no_of_sequence{}, min_input{}, max_input{};

    max_input = pow(10, 5);
    // Take number of sequence input
    no_of_sequence = getNumber(no_of_sequence, min_input + 2, 2 * max_input);

    vector<int> arr(no_of_sequence);
    // Take Array Input
    for (size_t i{}; i < arr.size(); ++i)
        arr.at(i) = getNumber(arr.at(i), min_input, max_input);

    // Way of using multiply values with each other
    long long product_1 = maxPairwiseProduct_1(arr);

    // Way of using just find 2 max Number to multiply --More Fast
    long long product_2 = maxPairwiseProduct_2(arr);

    // Way of using Bubble Sort
    bubbleSort(arr);
    long long product_3 = static_cast<long long>(arr[no_of_sequence - 1]) * arr[no_of_sequence - 2];

    cout << "Different Max Pairwise product function: "
         << "\n\tFind Max Multiplication value, Multiply all values with each other - " << product_1
         << "\n\tFind two Max Number Separately and Product- " << product_2
         << "\n\tBubble Sorted Product - " << product_3 << endl;

    // Show Sorted Arr list
    cout << "\nBubble Sorted Array: " << endl;
    for (auto val : arr)
        cout << "\t" << val;

    return 0;
}