class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Time complexity O(n) - Iterate through each element of the nums vector
        // Space complexity O(n) - Worst case store every element in nums vector again
        
        unordered_set<int> set;

        for (auto& n : nums)
        {
            if(!set.contains(n)) set.insert(n);
            else return true;
        }

        return false;
    }
};