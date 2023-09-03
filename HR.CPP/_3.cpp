#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int country_represented {};
    long people_in_cooch_behar {};
    char last_initial{};
    float car_payment {};
    double pi {};

    cin>>country_represented>>people_in_cooch_behar>>last_initial>>car_payment>>pi;

    cout<<country_represented<<endl
    <<people_in_cooch_behar<<endl
    <<last_initial<<endl
    << std::setprecision(4) << fixed <<car_payment<<endl
    << std::setprecision(10) << fixed <<pi<<endl;

    return 0;
}