class Solution {
public:
    int maxArea(vector<int>& heights) {
        // Time complexity is O(n) because each element of the numeric input is indexed once
        // Space complexity is O(1) because no container grows in size during runtime
        
        int left = 0;
        int right = heights.size() - 1;
        int res = 0;

        while (left < right)
        {
            int maxHeight = min(heights[left],heights[right]);
            int length = right - left;
            res = max(res, maxHeight*length);

            if(heights[left] <= heights[right]) {left++; continue;}
            if(heights[left] >= heights[right]) {right--; continue;}
        }

        return res;
    }
};
