class Solution {
public:
    
    struct myComp {
        constexpr bool operator()(
            pair<int, string> const& a,
            pair<int, string> const& b)
            const noexcept
        {
            if (a.first == b.first)
                return (a.second > b.second);
            return (a.first < b.first);
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map <string , int> m;
        vector<string> ans;
        for (int i = 0; i < words.size();i++)
            m[words[i]]++;
        priority_queue< pair <int, string> , vector < pair <int, string> > , myComp > pq;
        for (auto xs : m)
        {
            //cout << xs.first << " : " << xs.second << endl;
            pq.push(make_pair(xs.second, xs.first));
        }
        int i = 0;
        while (i < k && !pq.empty())
        {
            pair <int , string> p = pq.top();
            ans.push_back(p.second);
            pq.pop();
            i++;
        }
        return (ans);
    }
};