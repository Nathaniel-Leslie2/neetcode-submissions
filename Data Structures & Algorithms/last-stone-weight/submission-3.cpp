class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int> res = stones;
        if(res.empty()){return 0;}
        if(res.size() == 1){return res[0];}

        sort(res.begin(), res.end(), greater<int>());

            if(res[0] == res[1]){
                res.erase(res.begin());
                res.erase(res.begin());
                }

            if(res[0] > res[1]){
                res.push_back(res[0] - res[1]); 
                res.erase(res.begin());
                res.erase(res.begin());
                }

        return lastStoneWeight(res);
    }
};
