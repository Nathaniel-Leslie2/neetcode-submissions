class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s.length() != t.length()){return false;}
        if(s != t){return false;}
        return true;
    }
};
