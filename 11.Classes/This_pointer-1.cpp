#include <iostream>

using std::cout;
using std::endl;

class Point
{
    int x_coor{};
    int y_coor{};

public:
    /**
     * * set the x_coor value
     */
    void set_x(int x_coor)
    {
        this->x_coor = x_coor;
    }

    /**
     * * returning the x_coor value
     */
    int get_x() const
    {
        return this->x_coor;
    }

    /**
     * * return a reference to the object
     */
    Point get_object()
    {
        return *this;
    }
};

int main()
{
    Point p1;
    p1.set_x(10);
    Point p2 = p1.get_object();

    cout << p2.get_x() << endl;
    return 0;
}