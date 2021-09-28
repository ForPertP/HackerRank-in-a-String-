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
