class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char, int> m;
        int left = 0, right = 0, max_len = 0;
        for (; right < s.length();right++)
        {
            if (m.find(s[right]) != m.end() && m[s[right]] >= left)
            {
                max_len = max(max_len, right - left);
                left = m[s[right]] + 1;
                m[s[right]] = right;
            }
            else
                m[s[right]] = right;
            // printf("left = %d right = %d idx = %d\n",left, right, m[s[right]]);
        }
         max_len = max(max_len, right - left);
        return (max_len);
    }
};