class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1 && nums[0] == target){return 0;}

        int L = 0;
        int R = nums.size() - 1;
        int res;

        while(L <= R){
            if(nums[L] != target){
                L++;
            }
            else{return L;}
            if(nums[R] != target){
                R--;
            }
            else{return R;}
        }
        return -1;
    }
};
