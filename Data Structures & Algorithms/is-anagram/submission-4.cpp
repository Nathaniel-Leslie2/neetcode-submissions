class Solution {
public:
    bool isAnagram(string s, string t) {
        // Time complexity - O(n)
        // Space complexity - O(n)
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for (auto& c : s)
        {
            map1[c]++;
        }

        for (auto& c : t)
        {
            map2[c]++;
        }

        return map1 == map2;
    }
};
