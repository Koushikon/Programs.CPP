#include <iostream>
#include <ctime>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void take_input(vector<string> &words);
void display_words(const vector<string> &words);
int random_call(const int &&start_point, const int &end_no);
char random_call(const char &&start_point, const int &&end_no);
void dfa_ends_with_0(const vector<string> &words);

constexpr int vector_max_size{999};
constexpr int words_max_size{10};
constexpr int no_of_words{2};
vector<char> alphabet{'0', '1'};

int main()
{
    // Feeding the time to the random number generator
    std::srand((unsigned)time(0));

    // Generating vector size
    int arr_size = random_call(1, vector_max_size);

    // Declaring the vector
    vector<string> arr(arr_size);

    // Taking words input
    take_input(arr);

    // Processing the words
    dfa_ends_with_0(arr);

    return 0;
}

int random_call(const int &&start_point, const int &end_no)
{
    return start_point + std::rand() % end_no;
}

char random_call(const char &&start_point, const int &&end_no)
{
    return start_point + std::rand() % end_no;
}

void take_input(vector<string> &words)
{
    for (string &name : words)
    {
        int i{}, char_size{};
        char_size = random_call(1, words_max_size);

        while (i < char_size)
        {
            int index = random_call(0, no_of_words);
            cout << index << endl;
            name += alphabet[index];
            ++i;
        }
    }

    // To display the words
    // display_words(words);
}

void display_words(const vector<string> &words)
{
    for (const string &name : words)
        cout << name << '\t';
    cout << '\n';
}

/**
 * * DFA Starts with a
 * ! Starting position
 * @param words is a vector of strings
 */

void dfa_ends_with_0(const vector<string> &words)
{
    for (size_t i = 0; i < words.size(); i++)
    {
        size_t size{words.at(i).length() - 1};

        if (words.at(i).at(size) == '0')
            cout << i + 1 << "th String: " << words.at(i) << " - String Passed" << endl;
        else
            cout << i + 1 << "th String: " << words.at(i) << " - String Failed" << endl;
    }
}