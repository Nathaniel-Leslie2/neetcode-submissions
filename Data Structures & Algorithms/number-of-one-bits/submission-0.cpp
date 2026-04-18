class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        int temp = n;
        int i = 0;

        while(i < 32){
            res += (temp % 2);
            temp /= 2;
            i++;
        }
        return res;
    }
};
