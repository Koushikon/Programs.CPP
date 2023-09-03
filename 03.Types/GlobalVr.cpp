#include <iostream>
#include <typeinfo>

// Global variables
int age{34};
float bass{36.9f};
double pi{3.173645};
char word{'A'};
bool status{false};
auto gun{"ak-47"};

int main()
{
    std::cout << age << " " << typeid(age).name() << std::endl
              << bass << " " << typeid(bass).name() << std::endl
              << pi << " " << typeid(pi).name() << std::endl
              << word << " " << typeid(word).name() << std::endl
              << status << " " << typeid(status).name() << std::endl
              << gun << " " << typeid(gun).name() << std::endl;
    return 0;
}