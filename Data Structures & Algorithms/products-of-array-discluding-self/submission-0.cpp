class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> multiply = {};
        vector<int> result = {};
        int total = 1;
        
        for (int i = 0; i < nums.size(); i++){
            for(int k = 0; k < nums.size(); k++){
                if(i != k)
                    multiply.push_back(nums[k]);
            }
            for(auto& numbers: multiply){
                total *= numbers;
            }
            multiply = {};
            result.push_back(total);
            total = 1;
        }        
        return result;
    }


};
