#include <iostream>
using namespace std;

int main()
{
    // cout << "Small Alphabets using ascii value(97 - 122) : \n";
    // for (int i = 97; i <= 122; i++)
    //     cout << char(i) << " ";
    // cout << "\nBig Alphabets using ascii value(65 - 90) : " << endl;
    // for (int j = 65; j <= 90; j++)
    //     cout << char(j) << " ";
    // cout << "\nNumbers using ascii value(48 - 57) : " << endl;
    // for (int k = 48; k <= 57; k++)
    //     cout << char(k) << " ";
    // cout << "\nThe character value of 0 is space : \n";
    // cout << "\"" << char(0) << "\"";
    // cout << "\nThe character of ascii value 1 - 6 is : \n";
    // for (int m = 1; m <= 6; m++)
    //     cout << char(m) << " ";
    // cout << "\nThe character of ascii value 7 - 13 is beep and 2 symbols : \n";
    // for (int n = 7; n <= 13; n++)
    //     cout << char(n) << " ";
    // cout << "\nThe character of ascii value 14 - 25 is : \n";
    // for (int o = 14; o <= 25; o++)
    //     cout << char(o) << " ";
    // cout << "\nThe character of ascii value 27 - 47 is : \n";
    // for (int p = 27; p <= 47; p++)
    //     cout << char(p) << " ";
    // cout << "\nThe character of ascii value 58 - 64 is : \n";
    // for (int q = 58; q <= 64; q++)
    //     cout << char(q) << " ";
    // cout << "\nThe character of ascii value 91 - 96 is : \n";
    // for (int r = 91; r <= 96; r++)
    //     cout << char(r) << " ";
    // cout << "\nThe character of ascii value 123 - 256 is : \n";
    // for (int s = 123; s <= 256; s++)
    //     cout << char(s) << " ";
    // cout << "\nThe character value of 26 is delete : \n";
    // cout << "\"" << char(26) << "\"";

    char ch;
    int i;
    for (i = 1; i < 255; i++)
    {
        ch = i;
        cout << i << "-> " << ch << "\t";
    }
    return 0;
}