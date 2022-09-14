class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector <int> ans;
        map <char , int> m;
        for (int i = 0; i < p.length();i++)
            m[p[i]]++;
        int left = 0, right = 0;
        map <char , int> curr_map;
        while (right < s.length() && left < s.length())
        {
            if (left > right)
                right = left;
            //printf("right = %d left = %d len = %d\n",right, left, right - left + 1);
            if (m.find(s[right]) != m.end() && curr_map[s[right]] < m[s[right]])
            {
                curr_map[s[right]]++;
                if (right - left + 1 == p.length())
                {
                    ans.push_back(left);
                    curr_map[s[left]]--;
                    left++;
                }
                right++;
            }
            else
            {
                curr_map[s[left]]--;
                left++;
            }
        }
        return (ans);
    }
};