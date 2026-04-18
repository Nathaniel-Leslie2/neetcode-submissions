class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        int res = 0;

        while(count < 32)
        {
            int temp = n;
            if(temp %= 2) res++;
            n/=2;
            count++;
        }

        return res;
    }
};
