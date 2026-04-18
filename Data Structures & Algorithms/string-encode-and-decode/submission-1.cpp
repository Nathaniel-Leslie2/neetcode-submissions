class Solution {
public:
    string e = "";

    string encode(vector<string>& strs) {
        for (auto& s: strs){
            e += s + "`";
        }
        return e;
    }

    vector<string> decode(string s) {
        vector<string> result = {};
        char target = '`';
        string d = "";

        for(int i = 0; i < s.size(); i++){
            if(s[i] != target){
                d += s[i];
            }
            
            if(s[i] == target){
                result.push_back(d);
                d = "";
            }
        }
        return result;
    }
};
