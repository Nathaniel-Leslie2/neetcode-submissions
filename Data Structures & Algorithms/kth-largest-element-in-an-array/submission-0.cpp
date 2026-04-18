class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap; // store array integers in descending order

        // TC: O(n log n) & SC: O(n) | pushing elements to a max heap priority queue is log n, and I am pushing n elements
        for(int i = 0; i < nums.size(); i++)
        {
            maxHeap.push(nums[i]);
        }

        int count = 1;

        while(!maxHeap.empty())
        {
            int maxElm = maxHeap.top(); maxHeap.pop();
            if(count == k) return maxElm;
            count++;
        }

        return -1;
    }
};
