class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res = {};
        for(int i = 0; i < numbers.size(); i++){
            for(int k = 0; k < numbers.size(); k++){
                if(numbers[i] < numbers[k]){
                    if(target == numbers[i] + numbers[k]){
                        res.push_back(i + 1);
                        res.push_back(k + 1);
                    }
                }
            }
        }
        return res;
    }
};
