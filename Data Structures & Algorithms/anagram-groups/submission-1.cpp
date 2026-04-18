class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> res;

        for(auto s : strs)
        {
            string tempStr = s;
            sort(tempStr.begin(), tempStr.end());
            map[tempStr].push_back(s);
        }

        for(auto pair : map)
        {
            res.push_back(pair.second);
        }

        return res;
    }
};