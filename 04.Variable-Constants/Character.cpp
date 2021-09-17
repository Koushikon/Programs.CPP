#include <iostream>

int main()
{
    /*************
     * character type
    *************/

    char last_initial{'S'}; //  Single quotes around the character
    std::cout << "My last name initial is: " << last_initial << std::endl;

    char word{65};
    std::cout << "And the word is: " << word << std::endl;

    // To see the any particular character ASCII number
    std::cout << "The character number is: " << static_cast<int>(word) << std::endl;
    return 0;
}