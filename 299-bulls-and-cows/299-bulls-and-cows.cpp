class Solution {
public:
    string getHint(string secret, string guess) {
        string ans = "";
        map <char , int> m;
        int cntCommon = 0, cntNotCommon = 0;
         for (int i = 0; i < secret.length();i++)
         {
              if (secret[i] == guess[i])
                cntCommon++;
             else
                m[secret[i]]++;
         }
        for (int i = 0; i < secret.length();i++)
        {
            if (secret[i] != guess[i])
            {
                if (m[guess[i]] > 0)
                {
                    cntNotCommon++;
                    m[guess[i]]--;
                }
            }
        }
        ans += to_string(cntCommon) + "A";
        ans += to_string(cntNotCommon) + "B";
        return (ans);
    }
};