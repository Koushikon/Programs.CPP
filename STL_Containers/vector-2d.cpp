#include <iostream>
#include <vector>

using namespace std;

/*

3 x 4 matrix with 9 initial value:

9 9 9 9
9 9 9 9
9 9 9 9


Jagged Array:
 1   2   3   4
 5   6
 7   8   9  10  11
12  13  14
*/

void print_matrix(vector<vector<int>> m1)
{
    for (int i{}; i < m1.size(); i++)
    {
        for (int j{}; j < m1[0].size(); j++)
        {
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
}

void print_matrix_iterator(vector<vector<int>> m1)
{
    vector<vector<int>>::iterator it_out;
    vector<int>::iterator it_in;

    for (it_out = m1.begin(); it_out < m1.end(); it_out++)
    {
        for (it_in = it_out->begin(); it_in < it_out->end(); it_in++)
        {
            cout << *it_in << " ";
        }
        cout << endl;
    }
}

int main()
{
    // 3 x 4 Matrix with initialized to 9
    vector<vector<int>> matrix(3, vector<int>(4, 9));

    cout << matrix[0][0] << " " << matrix[1][1] << " " << matrix[2][2] << endl;
    cout << matrix.at(0).at(0) << " " << matrix.at(1).at(1) << " " << matrix.at(2).at(2) << endl;

    cout << "Row Size " << matrix.size() << " \nColumn Size " << matrix[0].size() << endl;

    // Print full matrix
    cout << "Matrix: " << endl;
    print_matrix(matrix);

    cout << "\nMatrix: " << endl;
    print_matrix_iterator(matrix);

    // Jagged vector
    vector<vector<int>> jagged_elements(4);
    jagged_elements[0] = vector<int>{1, 2, 3, 4};
    jagged_elements[1] = vector<int>{5, 6};
    jagged_elements[2] = vector<int>{7, 8, 9, 10, 11};
    jagged_elements[3] = vector<int>{12, 13, 14};

    cout << "\nJagged Elements: " << endl;
    print_matrix_iterator(jagged_elements);

    return 0;
}