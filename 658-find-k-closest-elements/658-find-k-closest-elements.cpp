class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        queue <int> q;
        vector <int> ans(k,0);
        int size = 0;
        for (int i = 0; i < arr.size();i++)
        {
            if (size != k)
            {
                q.push(arr[i]);
                size++;
            }
            else
            {
                int front = q.front();
                if (abs(arr[i] - x) <  (abs(front - x)))
                {
                    q.pop();
                    q.push(arr[i]);
                }
            }
        }
        int i = 0;
        while (!q.empty())
        {
            int front = q.front();
            ans[i++] = front;
            q.pop();
        }
        return (ans); 
    }
};