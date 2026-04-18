class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.empty()){return 0;}
        if(stones.size() == 1){return stones[0];}

        sort(stones.rbegin(), stones.rend());

            if(stones[0] == stones[1]){
                stones.erase(stones.begin());
                stones.erase(stones.begin());
                }

            if(stones[0] > stones[1]){
                stones.push_back(stones[0] - stones[1]); 
                stones.erase(stones.begin());
                stones.erase(stones.begin());
                }

        return lastStoneWeight(stones);
    }
};
