// Matrix Transpose in simple way with static, const, Default arguments, 2D-vector, functions and function prototype.

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void take_input(int &rw, int &clm);
void take_matrix_input(vector<vector<int>> &matrix);
void matrix_transpose(const vector<vector<int>> &matrix, vector<vector<int>> &transpose);
void display_matrix(const vector<vector<int>> &matrix);

void take_input(int &rw, int &clm)
{
    cout << "Enter the Matrix-"
         << " Row: ";
    cin >> rw;
    cout << "Enter the Matrix-"
         << " Column: ";
    cin >> clm;
}

void take_matrix_input(vector<vector<int>> &matrix)
{
    for (size_t i{}; i < matrix.size(); ++i)
    {
        for (size_t j{}; j < matrix[i].size(); ++j)
        {
            cout << "Enter the value for Matrix-"
                 << " [" << i + 1 << "] [" << j + 1 << "]: ";
            cin >> matrix.at(i).at(j);
        }
    }
}

void matrix_transpose(const vector<vector<int>> &matrix, vector<vector<int>> &transpose)
{
    for (size_t i{}; i < matrix.size(); ++i)
        for (size_t j{}; j < matrix[i].size(); ++j)
            transpose.at(j).at(i) = matrix.at(i).at(j);
}

void display_matrix(const vector<vector<int>> &matrix)
{
    for (auto &val_1 : matrix)
    {
        cout << "\t";
        for (auto &val : val_1)
            cout << val << "\t";
        cout << endl;
    }
    cout << endl;
}

int main()
{

    int matrixRow{}, matrixColumn{};
    take_input(matrixRow, matrixColumn);

    vector<vector<int>> matrix(matrixRow, vector<int>(matrixColumn));
    // Take user input for Matrix
    take_matrix_input(matrix);

    // Dsiplay Original Matrix values
    cout << "The original matrix: " << endl;
    display_matrix(matrix);

    vector<vector<int>> matrixTranspose(matrixColumn, vector<int>(matrixRow));
    // Perform Matrix transpose
    matrix_transpose(matrix, matrixTranspose);

    cout << "The Transpose matrix: " << endl;
    display_matrix(matrixTranspose);

    return 0;
}