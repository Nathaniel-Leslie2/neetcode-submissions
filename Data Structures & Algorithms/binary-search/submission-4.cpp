class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int res = -1;

        while(l <= r)
        {
            int m = ((r - l) / 2) + l;
            if (nums[m] < target) {l = m + 1; continue;}
            if (nums[m] > target) {r = m - 1; continue;}
            if (nums[m] == target) return m;
        }

        return res;
    }
};
