#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

/*
Output
--- With Copy Constructor ---

Constructor for10
Constructor for10
Copy constructor - deep copy for: 10
Destructor freeing data for 10
Constructor for20
Constructor for20
Copy constructor - deep copy for: 20
Constructor for10
Copy constructor - deep copy for: 10
Destructor freeing data for 10
Destructor freeing data for 20
Destructor freeing data for 10
Destructor freeing data for 20


--- With Move Constructor ---

Constructor for10
Move constructor - moving resource: 10
Destructor freeing data for nullptr
Constructor for20
Move constructor - moving resource: 20
Constructor for10
Copy constructor - deep copy for: 10
Destructor freeing data for 10
Destructor freeing data for nullptr
Destructor freeing data for 10
Destructor freeing data for 20
*/

class Move
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; }
    int get_data() const { return *data; }
    // Constructor
    Move(int d);

    Move(const Move &sources)
        : Move{*sources.data}
    {
        cout << "Copy constructor - deep copy for: " << *data << endl;
    }
    Move(Move &&sources);
    ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for - " << d << endl;
}

Move::Move(Move &&sources)
    : data{sources.data}
{
    sources.data = nullptr;
    cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move()
{
    if (data == nullptr)
        cout << "Destructor freeing data for nullptr" << endl;
    else
        cout << "Destructor freeing data for " << *data << endl;
    delete data;
}

int main()
{
    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    return 0;
}