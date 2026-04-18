class Solution {
public:
    bool isPalindrome(string s) {
        // Time complexity is O(n) because the algorithm searches through each character of the string vector for comparison
        // Space complexity is O(1) because the algorithm only parses the input once and does not store any new elements
        int left = 0;
        int right = s.size() - 1;

        while(left <= right){
            if(!isalnum(s[left])) {left++; continue;}
            if(!isalnum(s[right])) {right--; continue;}

            if(tolower(s[left]) == tolower(s[right]))
            {
                left++;
                right--;
                continue;
            }
            else {return false;}
        }
        return true;
    }
};
