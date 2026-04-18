class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> count;
        for (auto const& num : nums){
            if(count.find(num) != count.end()){return true;}
            count.insert(num);
        }
        return false;
    }
};