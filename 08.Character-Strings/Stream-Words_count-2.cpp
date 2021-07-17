// CPP program to count the specific words appear how many times in a string.

#include <iostream>
#include <string>
#include <sstream>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::stringstream;

void printFrequency(string sns)
{
    // Each word it mapped to it's frequency
    map<string, int> FW;
    stringstream words(sns); // Used for breaking words
    string tmp;              // To store individual words

    while (words >> tmp)
        FW[tmp]++;

    map<string, int>::iterator m;
    for (m = FW.begin(); m != FW.end(); m++)
        cout << m->first << " - " << m->second << endl;
}

int main()
{
    string sense = "Geeks For Geeks IDE";
    printFrequency(sense);

    return 0;
}
