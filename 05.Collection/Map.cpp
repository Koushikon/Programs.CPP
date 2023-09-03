#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::string;

void print_elements(map<int, string>::iterator iter);

/***
 * Reference: https://cplusplus.com/reference/map/map/
 * Learn Source: https://www.programiz.com/cpp-programming/map
 * C++ Map
 * C++ Map is dictionary like data structure in C# or Python
 *
 * In C++, maps are associative containers that store paired data.
 * These paired data are called key-value pairs, where the key is unique but the value is not.
 */

/***
 * Summary:
 * [] - used to assign or gets the element value from map.
 * .at() - used to gets the element value from map.
 * insert() - used to add new element to the map.
 * begin() - returns an iterator that points to the first element of the map.
 * end() - returns an iterator that points to the theoretical element following the last element of the map.
 * ->first - used to access the first object of the iterator which is key.
 * ->second - used to access the second object of the iterator which is value.
 * (*...).first - used to access the first object of the iterator which is key.
 * (*...).second - used to access the second object of the iterator which is value.
 * size() - returns the size of the map.
 * clear() - method delete all the elements of the map.
 * erase() - method delete element of the map through key, iterator or delete range of element.
 */

int main()
{
    map<int, string> student; // Creates a map without assigning any value
    map<int, string> word = {
        {1, "Jenny"},
        {2, "Das"},
        {3, "Ratan"}};

    // Get the value using Array Subscript operator [] or at() method with element key
    cout << "Word with key 2 is: " << word[2] << endl;
    cout << "Word with key 3 is: " << word.at(3) << endl;

    // Add new values in the Map
    word[4] = "Jackline";
    // word.at(5) = "Jackline"; // Error, Not for assigning
    // With insert() method alongside the make_pair() method to add
    word.insert(std::make_pair(5, "Kathrine"));
    cout << "word with key 4, 5 is: " << word.at(4) << ", " << word.at(5) << endl;

    // Add elements with duplicate keys
    word[6] = "📽 Movie";
    word[6] = "🎶 Music";
    cout << "Word with key 6 is: " << word.at(6) << endl;

    // Show all the elements with for loop
    for (size_t i = 1; i < word.size(); i++)
    {
        cout << word.at(i) << ", ";
    }
    cout << endl;

    // With iterator we can iterate through the map one by one
    map<int, string>::iterator iter; // declare an iterator to loop though the map

    /***
     * We have used a custom iterator iter to access the keys and values of the word map.
     * The key is given by the first object, and the value by the second object.
     *
     * begin() and end() method returns an iterator
     * that points to the first element and last element of the map.
     */
    for (iter = word.begin(); iter != word.end(); iter++)
    {
        cout << "Key: " << iter->first << " & Value: " << iter->second << ", ";
    }
    cout << endl;

    // Alternatively we can use dereference and . operator to access the first and second objects.
    for (iter = word.begin(); iter != word.end(); iter++)
    {
        cout << "Key: " << (*iter).first << " & Value: " << (*iter).second << ", ";
    }
    cout << endl;

    /***
     * With find() method we can search for keys in a map
     *
     * if key is found: returns an iterator pointing to the found element
     * if key is not found: returns an iterator pointing to the end of the map word.end()
     */
    word[3] = "🤣 Laugh";
    word[4] = "😊 Happy";
    iter = word.find(3);
    print_elements(iter);
    cout << endl;
    iter = word.find(77); // element not found
    print_elements(iter);
    cout << endl;

    cout << "word size: " << word.size() << endl;
    // clear() method delete all the elements of the map
    word.clear();
    cout << "word size: " << word.size() << endl;

    /***
     * erase() method to delete individual element of the map
     * delete the element through key
     * delete the element through iterator
     * delete range of elements by providing iterator of the first and last element
     */
    map<string, int> names = {
        {"Robo-1", 1},
        {"Robo-7", 2},
        {"Robo-100", 3}};
    names.erase("Robo-7"); // erase using the key
    map<string, int>::iterator iter_second;
    iter_second = names.begin();
    names.erase(iter_second); // erase using the iterator
    for (iter_second = names.begin(); iter_second != names.end(); iter_second++)
    {
        cout << "Value: " << iter_second->second << ", ";
    }
    cout << endl;

    names["Blake"] = 2;
    names["Dennis"] = 3;
    cout << "Initial Values:" << endl;
    for (iter_second = names.begin(); iter_second != names.end(); ++iter_second)
    {
        cout << iter_second->second << ", ";
    }
    cout << endl;
    names.erase(names.find("Blake"), names.find("Robo-100"));
    cout << "After erase Values:" << endl;
    for (iter_second = names.begin(); iter_second != names.end(); ++iter_second)
    {
        cout << iter_second->second << ", ";
    }
    cout << endl;

    return 0;
}

void print_elements(map<int, string>::iterator iter)
{
    cout << "Key: " << iter->first << " & Value: " << iter->second << ", ";
}