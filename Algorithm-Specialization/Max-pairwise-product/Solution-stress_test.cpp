// Max Pairwise Product Solution
#include <iostream>
#include <cmath>
#include <vector>
#include <cctype>

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

    // Stress test implementation
    while (true)
    {
        no_of_sequence = std::rand() % 1000 + 2;
        vector<int> arr(no_of_sequence);

        cout << "=> " << no_of_sequence << "\n";

        for (auto &value : arr)
        {
            value = std::rand() % 100000 + 1;
            cout << value << "  ";
        }
        cout << "\n";

        // MaxPairwise multiply --Slow
        long long product_1{maxPairwiseProduct_slow(arr)};

        // MaxPairwise multiply --Fast
        long long product_2{maxPairwiseProduct_fast(arr)};

        // MaxPairwise multiply --Fast(Wrong Sometime)
        // long long product_3{maxPairwiseProduct_fast_wrong(arr)};

        // Bubble Sort
        bubbleSort(arr);
        size_t last{arr.size() - 1};
        long long product_4{static_cast<long long>(arr.at(last)) * arr.at(last - 1)};

        if (product_1 == product_2 && product_2 == product_4)
            cout << "OK!\n";
        else
        {
            cout << "Wrong " << product_1 << "\t" << product_2 << "\t" << product_4 << "\n";
            break;
        }

        // cout << " Different Max Pairwise product functions:"
        //      << "\n\tslow version - " << product_1
        //      << "\n\tFast version - " << product_2
        //      << "\n\tBubble Sort version - " << product_3 << "\n";
    }

    return 0;
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

// long long maxPairwiseProduct_fast_wrong(const vector<int> &arr)
// {
//     int maxIndex_1{-1};

//     for (int i{}; i < arr.size(); ++i)
//         if (maxIndex_1 == -1 || arr.at(i) > arr.at(maxIndex_1))
//             maxIndex_1 = i;

//     int maxIndex_2{-1};
//     for (int j{}; j < arr.size(); ++j)
//         if (arr.at(j) != arr.at(maxIndex_1) && (maxIndex_2 == -1 || arr.at(j) > arr.at(maxIndex_2)))
//             maxIndex_2 = j;

//     // cout << arr.at(maxIndex_1) <<" - " << arr.at(maxIndex_2);
//     return (static_cast<long long>(arr.at(maxIndex_1)) * arr.at(maxIndex_2));
// }

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