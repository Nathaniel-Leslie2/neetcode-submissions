class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr(0,0);
        for(int i = 0; i < nums.size(); i++){
            for(int k = i + 1; k < nums.size(); k++){
                if(target == nums[i] + nums[k]){
                    arr.push_back(i);
                    arr.push_back(k);
                    return arr;
                }
            }

        }
    }
};
