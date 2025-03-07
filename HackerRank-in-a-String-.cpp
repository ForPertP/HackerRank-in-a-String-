#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'hackerrankInString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string hackerrankInString(string s)
{
    constexpr std::string_view target = "hackerrank";
    int targetIndex = 0;

    for (char c : s)
    {
        if (targetIndex < target.length() && c == target[targetIndex])
        {
            targetIndex++;
            if (targetIndex == target.length())
            {
                return "YES";
            }
        }
    }

    return "NO";
}


string hackerrankInString2(string s)
{
    std::deque<char> dq = {'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
    
    for (const auto & c : s)
    {
        if (c == dq[0])
        {
            dq.pop_front();
            if (dq.empty())
            {
                return "YES";
            }
        }
    }

    return "NO";
}
