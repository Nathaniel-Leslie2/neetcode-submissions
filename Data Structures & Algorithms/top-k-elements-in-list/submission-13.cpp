class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> map; // default min heap key value sort n logn time... i.e. 1, 2, 3, etc
        priority_queue<pair<int, int>> pq; // default max heap sort using first integer from pair i.e. 5, 4, 3, 2, etc n log n time

        for(auto const& n : nums)
        {
            map[n]++;
        }

        for(auto const& pair : map)
        {
            pq.push({pair.second, pair.first});
        }

        vector<int> res;
        int index = 0;
        while(!pq.empty())
        {
            if(index == k) break;
            res.push_back(pq.top().second);
            pq.pop();
            index++;
        }

        return res;
    }
};