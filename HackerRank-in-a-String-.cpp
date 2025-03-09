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


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
