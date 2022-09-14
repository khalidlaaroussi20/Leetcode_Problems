class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string ans = "";
        int min_len = 1000;
        
        for (int i = 0; i < strs.size();i++)
            min_len = min(min_len, (int)strs[i].length());
        for (int i = 0; i < min_len;i++)
        {
            for (int j = 0; j < strs.size();j++)
            {
                if (strs[j][i] != strs[0][i])
                    return ans;
            }
            ans += strs[0][i];
        }
        return (ans);
    }
};