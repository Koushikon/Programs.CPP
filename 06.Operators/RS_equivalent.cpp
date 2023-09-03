#include <iostream>
using namespace std;

int main()
{
    long rupee{};
    cout << "Enter amount as Rupees ₹";
    cin >> rupee;

    int note_200{200}, note_100{100}, note_50{50}, note_20{20}, note_10{10}, note_5{5}, note_2{2}, balance{}, note_of_200{}, note_of_100{}, note_of_50{}, note_of_20{}, note_of_10{}, note_of_5{}, note_of_2{}, note_of_1{};

    // Calculation Part using normal way - Start
    // note_of_200 = rupee / 200;
    // note_of_100 = (rupee - (note_of_200 * 200)) / 100;
    // note_of_50 = (rupee - ((note_of_200 * 200) + (note_of_100 * 100))) / 50;
    // note_of_20 = (rupee - ((note_of_200 * 200) + (note_of_100 * 100) + (note_of_50 * 50))) / 20;
    // note_of_10 = (rupee - ((note_of_200 * 200) + (note_of_100 * 100) + (note_of_50 * 50) + (note_of_20 * 20))) / 10;
    // note_of_5 = (rupee - ((note_of_200 * 200) + (note_of_100 * 100) + (note_of_50 * 50) + (note_of_20 * 20) + (note_of_10 * 10))) / 5;
    // note_of_2 = (rupee - ((note_of_200 * 200) + (note_of_100 * 100) + (note_of_50 * 50) + (note_of_20 * 20) + (note_of_10 * 10) + (note_of_5 * 5))) / 2;
    // note_of_1 = (rupee - ((note_of_200 * 200) + (note_of_100 * 100) + (note_of_50 * 50) + (note_of_20 * 20) + (note_of_10 * 10) + (note_of_5 * 5) + (note_of_2 * 2))) / 1;
    // ------------------------- End of this way

    // Calculation Part using normal & simplified way - Start
    //  every time on balance we store the current value
    // note_of_200 = rupee / note_200;
    // balance = rupee - (note_of_200 * note_200);
    // note_of_100 = balance / note_100;
    // balance -= note_of_100 * note_100;
    // note_of_50 = balance / note_50;
    // balance -= note_of_50 * note_50;
    // note_of_20 = balance / note_20;
    // balance -= note_of_20 * note_20;
    // note_of_10 = balance / note_10;
    // balance -= note_of_10 * note_10;
    // note_of_5 = balance / note_5;
    // balance -= note_of_5 * note_5;
    // note_of_2 = balance / 2;
    // balance -= note_of_2 * note_2;
    // note_of_1 = balance;
    // ------------------------- End of this way

    // Calculation Part using Modulo operator - Start
    // note_of_200 = rupee / 200;
    // note_of_100 = (rupee % 200) / 100;
    // note_of_50 = ((rupee % 200) % 100) / 50;
    // note_of_20 = (((rupee % 200) % 100) % 50) / 20;
    // note_of_10 = ((((rupee % 200) % 100) % 50) % 20) / 10;
    // note_of_5 = (((((rupee % 200) % 100) % 50) % 20) % 10) / 5;
    // note_of_2 = ((((((rupee % 200) % 100) % 50) % 20) % 10) % 5) / 2;
    // note_of_1 = (((((((rupee % 200) % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    // ------------------------- End of this way

    // Calculation Part using Modulo operator with more simplified way - Start
    note_of_200 = rupee / note_200;
    balance = rupee % note_200;
    note_of_100 = balance / note_100;
    balance %= note_100;
    note_of_50 = balance / note_50;
    balance %= note_50;
    note_of_20 = balance / note_20;
    balance %= note_20;
    note_of_10 = balance / note_10;
    balance %= note_10;
    note_of_5 = balance / note_5;
    balance %= note_5;
    note_of_2 = balance / note_2;
    balance %= note_2;
    note_of_1 = balance;
    // ------------------------- End of this way

    cout << "Notes of 200 Rupees ₹" << note_of_200 << endl
         << "Notes of 100 Rupees ₹" << note_of_100 << endl
         << "Notes of 50 Rupees ₹" << note_of_50 << endl
         << "Notes of 20 Rupees ₹" << note_of_20 << endl
         << "Notes of 10 Rupees ₹" << note_of_10 << endl
         << "Notes of 5 Rupees ₹" << note_of_5 << endl
         << "Notes of 2 Rupees ₹" << note_of_2 << endl
         << "Notes of 1 Rupees ₹" << note_of_1 << endl;

    return 0;
}