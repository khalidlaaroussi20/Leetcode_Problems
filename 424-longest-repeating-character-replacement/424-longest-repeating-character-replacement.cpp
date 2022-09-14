class Solution {
public:
    int max_frequency(map <char , int > m)
    {
        int max_freq = 0;
        for (auto xs : m)
        {
            max_freq = max(max_freq, xs.second);
        }
        return (max_freq);
    }
    int characterReplacement(string s, int k) 
    {
        int l = 0, r;
        int max_len = 0, max_freq = 0;
        map <char , int> m;
        for (r = 0; r < s.length();r++)
        {
            m[s[r]]++;
            max_freq = max(max_freq, m[s[r]]);
            while (r - l + 1 - max_freq > k)
            {
                m[s[l]]--;
                l++;
            }
            max_len = max(max_len, r - l + 1);
        }
        return (max_len);
    }
};