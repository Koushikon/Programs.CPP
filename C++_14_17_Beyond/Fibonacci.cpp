#include <iostream>
int main()
{
  int n1 = 0, n2 = 1, n3, i, number;
  std::cout << "Enter the number of elements: ";
  std::cin >> number;
  std::cout << n1 << " " << n2 << " "; // Printing 0 and 1
  for (i = 2; i < number; ++i)    // Loop starts from 2 because 0 and 1 are already printed
  {
    n3 = n1 + n2;
    std::cout << n3 << " ";
    n1 = n2;
    n2 = n3;
  }
  return 0;
}