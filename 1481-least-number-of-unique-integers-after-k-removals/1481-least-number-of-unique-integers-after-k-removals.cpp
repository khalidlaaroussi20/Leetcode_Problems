class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map <int, int> m;
        for (int i = 0; i < arr.size(); i++)
            m[arr[i]]++;
        priority_queue <int, vector<int>, greater<int> > pq;
        for (auto xs : m)
            pq.push(xs.second);
        while (k != 0)
        {
            int top = pq.top();
            pq.pop();
            top--;
            if (top != 0)
                pq.push(top);
            k--;
        }
        return (pq.size());
    }
};