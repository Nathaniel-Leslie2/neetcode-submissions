class Solution {
public:
    bool isPalindrome(string s) {
        string original;
        
        for(int i = 0; i < s.size(); i++){
            if(!isspace(s[i]) && isalnum(s[i])){original += tolower(static_cast<unsigned char>(s[i]));}
        }

        string OriginalReversed = original;
        reverse(OriginalReversed.begin(), OriginalReversed.end());

        for(int i = 0; i < original.size(); i++){
            if(original[i] == OriginalReversed[i]){continue;}
            else{return false;}
        }
        return true;
    }
};
