#include <iostream>

using namespace std;

// 1. multiplication table of a number
void PrintMultiplication(int num)
{
    for (int i{1}; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
}

// 2. print name
void PrintName()
{
    cout << "Koushik" << endl;
    return; // return but without value
}

// 3. get multiplication of 3 numbers
int GetMultiplication(int x, int y, int z)
{
    return (x * y * z);
}

// 4. Convert into uppercase
char ConvertToUpper(char ch)
{
    // ex b => 98 - 97 + 65
    char upper = ch - 'a' + 'A';
    return upper;
}

int main()
{
    PrintMultiplication(7);

    PrintName();

    int result = GetMultiplication(5, 3, 2);
    cout << "Result of multiplication is " << result << endl;

    char resCh = ConvertToUpper('k');
    cout << "Result character is " << resCh << endl;

    return 0;
}