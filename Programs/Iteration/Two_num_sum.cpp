/**
 * @file Two_num_sum.cpp
 * @author Koushik
 * @brief Two Number Sum Problem
 * @details Solved using Iteration
 * @version 0.1
 * @date 2021-11-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <array>

using std::array;
using std::cout;
using std::endl;

array<int, 2> two_num_sum(const array<int, 9> nums, const int &target);

int main()
{
    constexpr array<int, 9> numbers{7, 8, 5, -4, 1, 9, 6, -2};
    constexpr int target{11};

    array<int, 2> result{};
    result = two_num_sum(numbers, target);

    for (const int &val : numbers)
        cout << val << '\t';
    cout << '\n';

    cout << "Inside these numbers " << numbers.at(result.front())
         << " + " << numbers.at(result.back()) << " is Equivalent to the "
         << target << endl;

    return 0;
}

array<int, 2> two_num_sum(const array<int, 9> nums, const int &target)
{
    /**
     * Time Complexity: O(n^2)
     * Space Complexity: O(1)
     */
    for (int i{}; i < nums.size(); ++i)
    {
        for (int j{}; j < nums.size(); ++j)
        {
            if (nums.at(i) + nums.at(j) == target)
                return {i, j};
        }
    }
    return {};
}