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
