class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector <int> ans (k);
        int left = 0,  right = arr.size() - 1;
        
        while (left < right && right - left + 1 != k)
        {
            if (abs(arr[left] - x) <= abs(arr[right] - x))
                right--;
            else
                left++;
        }
        for (int i = 0; i < k;i++)
        {
            ans[i] = arr[i + left];
        }
        return (ans);
    }
};