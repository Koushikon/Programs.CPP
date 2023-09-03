#include <iostream>

using std::cout;
using std::endl;

int main()
{
    const int car_speed{50};
    if constexpr (car_speed > 40)
    {
        cout << car_speed << " its normal speed." << endl;
    }

    /**
     * * If constexpr with Initializer
     * ? This variable remains on whole if scope
     * ? i.e. In the if, else and else if block
     */
    if constexpr (const int speed{50}; speed > 40)
    {
        cout << speed << " its normal speed." << endl;
    }
    return 0;
}