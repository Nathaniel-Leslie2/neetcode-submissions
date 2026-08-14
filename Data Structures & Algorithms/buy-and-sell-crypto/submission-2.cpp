class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;

        int l = 0;
        int r = 1;
        int res = 0;

        while (l < r && r < prices.size())
        {
            res = max((prices[l] - prices[r]) * -1, res);

            if (r + 1 != prices.size()) r++;
            else {l++; r = l + 1;};
            
        }

        return res;
    }
};
