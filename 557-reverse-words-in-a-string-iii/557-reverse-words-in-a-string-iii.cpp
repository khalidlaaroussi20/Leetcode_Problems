class Solution {
public:
    void reverseSubStr(string &s,  int left, int right)
    {
        while (left <= right)
        {
            char tmp = s[right];
            s[right] = s[left];
            s[left] = tmp;
            left++;
            right--;
        }
    }
    string reverseWords(string s) 
    {
        int left = 0;
        for (int i = 0; i < s.length();i++)
        {
            if (s[i] == ' ')
            {
                reverseSubStr(s, left, i - 1);
                left = i + 1;
            }
        }
        reverseSubStr(s, left, s.length() - 1);
        return (s);
    }
};