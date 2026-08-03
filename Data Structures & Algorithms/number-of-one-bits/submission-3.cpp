class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        int res = 0;

        while (count < 32)
        {
            if (n % 2 == 1) res++;
            n = n / 2;
            count++;
        }

        return res;
    }
};
