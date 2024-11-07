#include <iostream>
using namespace std;

int main()
{
     int counter{10}, result{};

     /*************
      * Increment Prefix/Postfix
      *************/
     cout << "Counter: " << counter << endl;
     counter = counter + 1;
     cout << "Counter: " << counter << endl;

     ++counter; // Prefix increment
     cout << "Counter: " << counter << endl;

     counter++; // Postfix increment
     cout << "Counter: " << counter << endl;

     /*************
      * Increment Prefix/Postfix
      *************/
     counter = 15, result = 0;

     cout << "Counter: " << counter << endl;

     /*************
      * Example_2 Prefix
      *************/
     counter = 10, result = 0;
     cout << "\nCounter: " << counter << endl;
     // Ass the name suggest this type increase the value before using it,
     // like result in this case...
     result = ++counter;
     cout << "Counter: " << counter << endl
          << "Result: " << result << endl;

     /*************
      * Example_3 Postfix
      *************/
     counter = 10, result = 0;
     cout << "\nCounter: " << counter << endl;
     // As the name suggest this type increase the value after using it,
     // like result in this case...
     result = counter++;
     cout << "Counter: " << counter << endl
          << "Result: " << result << endl;

     /*************
      * Example_4 Prefix
      *************/
     counter = 10, result = 0;
     cout << "\nCounter: " << counter << endl;
     // As the name suggest this type increase the value after using it,
     // like result in this case...
     result = ++counter + 10;
     cout << "Counter: " << counter << endl
          << "Result: " << result << endl;

     /*************
      * Example_5 Postfix
      *************/
     counter = 10, result = 0;
     cout << "\nCounter: " << counter << endl;
     // As the name suggest this type increase the value after using it,
     // like result in this case...
     result = counter++ + 10;
     cout << "Counter: " << counter << endl
          << "Result: " << result << endl;

     return 0;
}