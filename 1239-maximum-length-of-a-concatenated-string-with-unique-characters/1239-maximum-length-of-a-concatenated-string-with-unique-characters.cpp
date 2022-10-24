class Solution {
public:
    int ans = 0;
    int maxLength(vector<string>& arr) {
        allPossible(arr, 0, "");
        return (ans);
    }
    void allPossible(vector<string>& arr, int i, string curr)
    {
        if (i >= arr.size())
        {
            if (curr.length() > ans)
                ans = curr.length();
            return ;
        }
        allPossible(arr, i + 1,curr);
        curr += arr[i];
        map <char, int > m;
        for (int i = 0; i < curr.length(); i++)
        {
            m[curr[i]]++;
            if (m[curr[i]] > 1)
                return ;
        }
        allPossible(arr, i + 1,curr);
    }
    
};