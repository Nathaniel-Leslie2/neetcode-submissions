class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        int i = 0;

        while(i < 32){
            res += (n % 2);
            n /= 2;
            i++;
        }
        return res;
    }
};
