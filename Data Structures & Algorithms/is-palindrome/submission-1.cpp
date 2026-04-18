class Solution {
public:
    bool isPalindrome(string s) {
        string original;
        
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){original += tolower(s[i]);}
        }

        string OriginalReversed = original;
        reverse(OriginalReversed.begin(), OriginalReversed.end());

        if(original == OriginalReversed){return true;}
        else{return false;}
    }
};
