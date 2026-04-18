class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;

        for(auto const& n : nums)
        {
            int product = 1;
            bool skipNum = false;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == n && !skipNum)
                {
                    skipNum = true;
                    continue;
                }
                product = product * nums[i];
            }
            res.push_back(product);
        }

        return res;
    }
};
