#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::string;

/**
 * * LC Valid Parentheses Check using Vector
 * * Like "({[]})", "()[]{}", "{()}", "[]" ... True
 * * Like "]", "(]", "({]})", "(]])" ... False
 */

class Solution
{
public:
    bool isValid(string s)
    {
        std::map<char, char> direct{
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}};

        if (s.size() == 0 || (s.size() % 2 != 0) || s[0] == ')' || s[0] == '}' || s[0] == ']')
            return false;

        std::vector<char> bracket;
        for (size_t i{}; i < s.size(); i++)
        {
            if (direct.find(s[i]) != direct.end())
            {
                bracket.push_back(direct[s[i]]);
                continue;
            }

            if (!bracket.empty())
            {
                if (s[i] == bracket.back())
                    bracket.pop_back();
                else
                    return false;
            }
            else if (bracket.empty() && s[0] == ')' || s[0] == '}' || s[0] == ']')
                return false;
        }

        return (bracket.empty()) ? true : false;
    }
};

int main()
{
    cout << std::boolalpha;
    Solution s;

    std::vector<string> words = {
        "({[]})", "()[]{}", "{()}", "[]", "]", "(]", "({]})", "(]])", "}[", "(){}}{"};

    for (string &single : words)
        cout << s.isValid(single) << endl;
    return 0;
}