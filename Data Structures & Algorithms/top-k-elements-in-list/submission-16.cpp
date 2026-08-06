class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Time complexity - O (n log n) sorted hashmap in descending order
        // Space Complexity - O (n) store each element three times worst-case
        
        unordered_map<int,int> numMap;
        set<pair<int,int>> freqSet;
        vector<int> res;
        int count = 0;

        // O(n) insertion time constant for n elements
        for (auto& n : nums)
        {
            numMap[n]++;
        }

        // O (n log n) insertion time
        for (auto& p : numMap)
        {
            freqSet.insert({p.second,p.first});
        }

        // O (k) iterate over k elements
        for (auto p = freqSet.rbegin(); p != freqSet.rend(); ++p)
        {
            if (count == k) break;
            res.push_back(p -> second);
            count++;
        }

        return res;
    }
};
