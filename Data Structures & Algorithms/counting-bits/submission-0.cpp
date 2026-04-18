class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1, 0);
        int k = 0;
        int moduloRes = 0;

        for(int i = 0; i < res.size(); i++){
            k = 0;
            moduloRes = i;
            while(k<32){
                res[i] += (moduloRes % 2);
                moduloRes /= 2;
                k++;
            }
        }
        return res;
    }
};
