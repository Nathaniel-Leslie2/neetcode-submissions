class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r){
            int m = l + (r-1) / 2;
            if(nums[m] < nums[r]){
                r = r - 1;
            }
            else if(nums[m] > nums[r]){
                l = l + 1;
            }
            else{return nums[m];}
        }
        return nums[0];
    }
};
