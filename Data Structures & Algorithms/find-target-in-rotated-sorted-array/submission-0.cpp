class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){
            if(nums[l] != target){
                l = l + 1;
            }
            else{return l;}
            if(nums[r] != target){
                r = r - 1;
            }
            else{return r;}
        }
        return -1;
    }
};
