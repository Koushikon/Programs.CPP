// Max Pairwise Product Solution
#include <iostream>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int getNumber(const int &min, const int &max);
long long maxPairwiseProduct_slow(const vector<int> &arr);
long long maxPairwiseProduct_fast_wrong(const vector<int> &arr);
long long maxPairwiseProduct_fast(const vector<int> &values);
void bubbleSort(vector<int> &arr);

int main()
{
    int no_of_sequence{}, min_input{}, max_input{};
    max_input = std::pow(10, 5);

    // Take number of sequence input
    no_of_sequence = getNumber(min_input + 2, 2 * max_input);

    vector<int> arr(no_of_sequence);
    // Take vector Input
    for (auto &value : arr)
        value = getNumber(min_input, max_input);

    // Way of using multiply values with each other
    long long product_1{maxPairwiseProduct_slow(arr)};

    // Way of using just find 2 max Number to multiply --Fast but wrong
    long long product_2{maxPairwiseProduct_fast_wrong(arr)};

    // Way of using just find 2 max Number to multiply --Fast
    long long product_3{maxPairwiseProduct_fast(arr)};

    // Way of using Bubble Sort
    bubbleSort(arr);
    size_t last{arr.size() - 1};
    long long product_4{static_cast<long long>(arr.at(last)) * arr.at(last - 1)};

    cout << " Different Max Pairwise product functions:"
         << "\n\tslow version - " << product_1
         << "\n\tFast Wrong version - " << product_2
         << "\n\tFast version - " << product_3
         << "\n\tBubble Sort version - " << product_4 << "\n";

    cout << " 🎷 They all are same its " << std::boolalpha << (product_1 == product_2 && product_2 == product_3 && product_3 == product_4) << "\n";

    // Show Sorted Arr list
    cout << "\nBubble Sorted Array: \n";
    for (auto val : arr)
        cout << "\t" << val;

    return 0;
}

int getNumber(const int &min, const int &max)
{
    int number{};

    while (true)
    {
        cin >> number;
        if (number > min && number < max)
            break;
    }
    return number;
}

long long maxPairwiseProduct_slow(const vector<int> &arr)
{
    long long product{};
    for (int i{}; i < arr.size() - 1; ++i)
        for (int j{i + 1}; j < arr.size(); ++j)
            if (static_cast<long long>(arr.at(i)) * arr.at(j) > product)
                product = static_cast<long long>(arr.at(i)) * arr.at(j);
    return product;
}

long long maxPairwiseProduct_fast_wrong(const vector<int> &arr)
{
    int maxIndex_1{-1};

    for (int i{}; i < arr.size(); ++i)
        if (maxIndex_1 == -1 || arr.at(i) > arr.at(maxIndex_1))
            maxIndex_1 = i;

    int maxIndex_2{-1};
    for (int j{}; j < arr.size(); ++j)
        if (arr.at(j) != arr.at(maxIndex_1) && (maxIndex_2 == -1 || arr.at(j) > arr.at(maxIndex_2)))
            maxIndex_2 = j;

    // cout << arr.at(maxIndex_1) <<" - " << arr.at(maxIndex_2);
    return (static_cast<long long>(arr.at(maxIndex_1)) * arr.at(maxIndex_2));
}

long long maxPairwiseProduct_fast(const vector<int> &arr)
{
    int max_index1{-1};
    for (size_t i{}; i < arr.size(); ++i)
        if (max_index1 == -1 || arr.at(i) > arr.at(max_index1))
            max_index1 = i;

    int max_index2{-1};
    for (size_t j{}; j < arr.size(); ++j)
        if (j != max_index1 && (max_index2 == -1 || arr.at(j) > arr.at(max_index2)))
            max_index2 = j;

    cout << " The Max 2 Values are " << arr.at(max_index2) << " and " << arr.at(max_index1) << "\n";

    return (static_cast<long long>(arr.at(max_index1)) * arr.at(max_index2));
}

void bubbleSort(vector<int> &arr)
{
    for (int i{}; i < arr.size() - 1; ++i)
        for (int j{}; j < arr.size() - i - 1; ++j)
            if (arr.at(j) > arr.at(j + 1))
            {
                arr.at(j + 1) += arr.at(j);
                arr.at(j) = arr.at(j + 1) - arr.at(j);
                arr.at(j + 1) -= arr.at(j);
            }
}