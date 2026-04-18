class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> multiply = {};
        vector<int> result = {};
        int k = 0;
        int total = 1;
        
        for (int i = 0; i < nums.size(); i++){
            total = 1;
            for(int k = 0; k < nums.size(); k++){
                if(i != k)
                    total *= nums[k];
            }
            result.push_back(total);
        }        
        return result;
    }


};
