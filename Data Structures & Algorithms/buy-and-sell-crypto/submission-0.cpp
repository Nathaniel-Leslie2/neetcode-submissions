class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1) return 0;
        int res = 0;
        for(int i = 0; i < prices.size(); i++){
            for(int k = i + 1; k < prices.size(); k++){
                res = max(res, (prices[k]-prices[i]));
            }
        }
        return res;
    }
};
