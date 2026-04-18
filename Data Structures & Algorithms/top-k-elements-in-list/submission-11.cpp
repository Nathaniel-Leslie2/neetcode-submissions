class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> HashedNums;
        vector<pair<int, int>> arr;
        vector<int> res = {};

        for(const auto& n: nums){
            HashedNums[n]++;
        }
        for(const auto& pair: HashedNums){
            arr.push_back({pair.second, pair.first});
        }

        sort(arr.rbegin(), arr.rend());

        for(int i = 0; i < k; i++){
            res.push_back(arr[i].second);
        }
        
        return res;
    }
};