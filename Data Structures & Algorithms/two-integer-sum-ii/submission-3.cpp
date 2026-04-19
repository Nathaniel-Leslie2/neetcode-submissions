class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Time complexity is O(n) because the numeric input array is only iterated over once
        // Space complexity is O(1) because no data grows during runtime

        int left = 0;
        int right = numbers.size() - 1;
        vector<int> res;
        res.reserve(2); // prevents O(n) resize operation

        while(left < right)
        {
            if(numbers[left] + numbers[right] == target)
            {
                res.push_back(left + 1);
                res.push_back(right + 1);
                break;
            }

            if(numbers[left] + numbers[right] < target) left++;
            if(numbers[left] + numbers[right] > target) right--;
        }

        return res;
    }
};
