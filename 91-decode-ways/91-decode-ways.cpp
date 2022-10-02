class Solution {
public:
    int numDecodings(string s) 
    {
        if (s.length() == 0 || s[0] == '0')
            return (0);
        vector <int> dp (s.length() + 1, 0);
        dp[0] = 1;
        dp[1] = (s[1] == '0') ? 0 : 1;
        for (int i = 2; i <= s.length();i++)
        {
            int firstDigit = s[i - 1] - '0';
            int secondDigit = s[i - 2] - '0';
            int nb = secondDigit * 10 + firstDigit;
            if (firstDigit > 0)
                dp[i] +=  dp[i - 1];
            if (nb >= 10 && nb <= 26)
                dp[i] += dp[i - 2]; 
        }
        return (dp[s.length()]);
    }
};