class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        unordered_set<int> uniqueNums;
        int smallestVal = INT_MAX;
        int largestVal = INT_MIN;
        int count = 0;

        for (auto& n : nums)
        {
            uniqueNums.insert(n);
            smallestVal = min(smallestVal, n);
            largestVal = max(largestVal, n);
        }

        int countTracker = 0;
        for(int i = smallestVal; i <= largestVal; i++)
        {
            if (countTracker == -1 & count + 1 >= uniqueNums.size() - 1) return count + 1;
            if (i != INT_MAX && uniqueNums.contains(i + 1)) {countTracker++; uniqueNums.erase(i + 1);}
            else {count = max(count, countTracker); countTracker = -1;}
        }

        return count + 1;
    }
};
