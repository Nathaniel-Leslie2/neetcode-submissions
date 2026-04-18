class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int index = 0;

        for(auto const& n : nums)
        {
            if(map.count(target - n)) return {map[target - n], index};
            map[n] = index;
            index++;    
        }

        return {};
    }
};