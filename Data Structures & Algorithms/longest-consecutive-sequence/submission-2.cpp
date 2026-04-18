class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){return 0;}
        vector<int> SortedNums = nums;
        sort(SortedNums.begin(), SortedNums.end());
        int Comparison = SortedNums[0];

        int ConsecutiveCount = 1;
        vector<int> res = {};
        for(int i = 1; i < SortedNums.size(); i++){
            if(Comparison == SortedNums[i]){continue;}
            if(Comparison + 1 == SortedNums[i]){ConsecutiveCount++;Comparison = SortedNums[i];}
            else{res.push_back(ConsecutiveCount); ConsecutiveCount = 1;Comparison = SortedNums[i];}
        }
        res.push_back(ConsecutiveCount);

        int max = res[0];
        for(const auto& num: res){
            if(num > max){max = num;}
        }

        return max;
    }
};
