class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto& n : nums)
        {
            if (s.contains(n)) return true;
            s.insert(n);
        }

        return false;
    }
};