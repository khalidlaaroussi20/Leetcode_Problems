class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        for (int i = 0; i < s.length() - 1;i++)
        {
            int k = 0;
            bool flag = true;
            // if (i + 1 > ((int)s.length() - (i + 1)))
            //         break ;
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[k] != s[j])
                {
                    flag = false;
                    break ;
                }
                else
                {
                    if (k == i)
                        k = 0;
                    else
                        k++;
                }  
            }
            if (flag && k == 0)
                return (true);
        }
        return (false);
    }
};