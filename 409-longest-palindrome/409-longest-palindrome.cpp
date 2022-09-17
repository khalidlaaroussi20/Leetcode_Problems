class Solution {
public:
    int longestPalindrome(string s) {
        map <char , int> m;
        for (int i = 0; i < s.length();i++)
            m[s[i]]++;
        int ans = 0;
        bool flag = false;
        for (auto xs : m)
        {
            ans += xs.second;
            if (xs.second % 2)
            {
                flag = true;
                ans -= 1;
            }
        }
        if (flag)
            ans++;
        return (ans);
    }
};