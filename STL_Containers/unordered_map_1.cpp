#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> table;
    table["in"] = "India";

    table.insert(make_pair("en", "England"));

    pair<string, string> p1;
    p1.first = "br";
    p1.second = "Brazil";

    pair<string, string> p2;
    p2.first = "fr";
    p2.second = "France";

    table.insert(p1);
    table.insert(p2);

    cout << "table size is " << table.size() << endl;
    cout << table.at("in") << " " << table["br"] << endl;

    table.clear();

    if (table.empty())
    {
        cout << "table is empty." << endl;
    }
    else
    {
        cout << "table is not empty." << endl;
    }

    // table.at("br") = "Brazil";  // Not work
    table["br"] = "Brazil";
    table["in"] = "India";
    table["us"] = "United States";
    table["uk"] = "United Kingdom";

    cout << "table size is " << table.size() << endl;
    cout << table.at("br") << " " << table["br"] << endl;

    // Traversing the map using iterator
    unordered_map<string, string>::iterator it = table.begin();

    while (it != table.end())
    {
        pair<string, string> p11 = *it;
        cout << p11.first << " -> " << p11.second << endl;
        it++;
    }
    cout << endl;

    table.erase("in");
    table.erase(table.begin(), table.end());

    if (table.find("br") != table.end())
    {
        cout << "1. Key found." << endl;
    }
    else
    {
        cout << "2. key not found." << endl;
    }

    if (table.count("us"))
    {
        cout << "3. Key is found." << endl;
    }

    // Ordering Check
    unordered_map<int, string> m3;
    m3.insert(make_pair(2, "Asta"));
    m3.insert(make_pair(1, "Uno"));
    m3.insert(make_pair(3, "Nika"));

    unordered_map<int, string>::iterator it3 = m3.begin();
    while (it3 != m3.end())
    {
        pair<int, string> p3 = *it3;
        cout << p3.first << "  ->  " << p3.second << endl;
        it3++;
    }

    return 0;
}