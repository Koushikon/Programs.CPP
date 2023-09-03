// Matrix Substraction in simple way with static, const, 2D-vector, functions and function prototype.

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void take_input(int &rw, int &clm);
void take_matrix_input(vector<vector<int>> &matrix);
void matrix_substraction(const vector<vector<int>> &matrix1, const vector<vector<int>> &matrix2, vector<vector<int>> &matrixSum);
void display_matrix(const vector<vector<int>> &matrix);

void take_input(int &rw, int &clm)
{
    static int counter{1};
    cout << "Enter the Matrix-" << counter << " Row: ";
    cin >> rw;
    cout << "Enter the Matrix-" << counter << " Column: ";
    cin >> clm;
    counter++;
}

void take_matrix_input(vector<vector<int>> &matrix)
{
    static int counter{1};
    for (size_t i{}; i < matrix.size(); ++i)
    {
        for (size_t j{}; j < matrix[i].size(); ++j)
        {
            cout << "Enter the value for Matrix-" << counter << " [" << i + 1 << "] [" << j + 1 << "]: ";
            cin >> matrix.at(i).at(j);
        }
    }
    cout << endl;
    counter++;
}

void matrix_substraction(const vector<vector<int>> &matrix1, const vector<vector<int>> &matrix2, vector<vector<int>> &matrixSub)
{
    for (size_t i{}; i < matrixSub.size(); ++i)
    {
        for (size_t j{}; j < matrixSub[i].size(); ++j)
        {
            matrixSub.at(i).at(j) = matrix1.at(i).at(j) - matrix2.at(i).at(j);
        }
    }
}

void display_matrix(const vector<vector<int>> &matrix)
{
    static int counter{1};
    cout << "Display Matrix-" << counter << ": " << endl;
    for (auto &val_1 : matrix)
    {
        cout << "\t";
        for (auto &val : val_1)
            cout << val << "\t";
        cout << endl;
    }
    cout << endl;
    counter++;
}

int main()
{

    int matrix1Row{}, matrix1Column{}, matrix2Row{}, matrix2Column{};
    take_input(matrix1Row, matrix1Column);
    take_input(matrix2Row, matrix2Column);

    if (matrix1Row == matrix2Row && matrix1Column == matrix2Column)
    {
        vector<vector<int>> matrix1(matrix1Row, vector<int>(matrix1Column)), matrix2(matrix2Row, vector<int>(matrix2Column));

        // Take user input for Matrix-1 and Matrix-2
        take_matrix_input(matrix1);
        take_matrix_input(matrix2);

        // Dsiplay Matrix-1 and Matrix-2 values
        display_matrix(matrix1);
        display_matrix(matrix2);

        vector<vector<int>> matrixSub(matrix1Row, vector<int>(matrix2Column));

        // Perform Matrix-1 and Matrix-2 addition and store it to MatrixSub
        matrix_substraction(matrix1, matrix2, matrixSub);
        // Dsiplay MatrixSub values
        display_matrix(matrixSub);
    }
    else
    {
        cout << "Matrix Substraction is not possible due to different order." << endl;
    }

    return 0;
}