#include<iostream>
#include<vector>
using namespace  std;

int main() {
    vector <int> vector1, vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"the first value: "<<vector1.at(0)<<endl
        <<"the second value: "<<vector1.at(1)<<endl
        <<"the of the vector is: "<<vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"\nthe first value: "<<vector2.at(0)<<endl
        <<"the second value: "<<vector2.at(1)<<endl
        <<"the of the vector is: "<<vector2.size()<<endl;

    vector <vector <int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"\n2D vector first value: "<<vector_2d.at(0).at(0)<<endl
        <<"2D vector second value: "<<vector_2d.at(0).at(1)<<endl
        <<"2D vector third value: "<<vector_2d.at(1).at(0)<<endl
        <<"2D vector fourth value: "<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0) = 1011;
    cout<<"\nvector1 updated first value: "<<vector1.at(0)<<endl
        <<"vector1 updated second value: "<<vector1.at(1)<<endl;

    cout<<"\n2D vector first value: "<<vector_2d.at(0).at(0)<<endl
        <<"2D vector second value: "<<vector_2d.at(0).at(1)<<endl
        <<"2D vector third value: "<<vector_2d.at(1).at(0)<<endl
        <<"2D vector fourth value: "<<vector_2d.at(1).at(1)<<endl;

    return 0;
}