class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack <char> stackS1;
        stack <char> stackT1;
        for (int i = 0; i < s.length();i++)
        {
            if (s[i] == '#')
            {
                if (!stackS1.empty())
                    stackS1.pop();
            }
            else
                stackS1.push(s[i]);
        }
        for (int i = 0; i < t.length();i++)
        {
            if (t[i] == '#')
            {
                if (!stackT1.empty())
                    stackT1.pop();
            }
            else
                stackT1.push(t[i]);
        }
        if (stackS1.size() != stackT1.size())
            return (false);
        while (!stackS1.empty())
        {
            if (stackS1.top() != stackT1.top())
                return (false);
            stackS1.pop();
            stackT1.pop();
        }
        return (true);
    }
};