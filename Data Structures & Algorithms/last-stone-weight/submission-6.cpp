class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.empty()){return 0;}
        if(stones.size() == 1){ return stones[0];}

        sort(stones.begin(), stones.end());

            if(stones[stones.size() - 1] == stones[stones.size() - 2]){
                stones.pop_back();
                stones.pop_back();
                return lastStoneWeight(stones);
                }

            if(stones[stones.size() - 1] > stones[stones.size() - 2]){
                int res = stones[stones.size() - 1] - stones[stones.size() - 2];
                stones.pop_back();
                stones.pop_back();
                stones.push_back(res);
                return lastStoneWeight(stones);
                }

        return lastStoneWeight(stones);
    }
};
