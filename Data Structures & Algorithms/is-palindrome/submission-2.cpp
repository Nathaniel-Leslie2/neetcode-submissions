class Solution {
public:
    bool isPalindrome(string s) {
        // Time complexity is O(n) because each element is iterated over multiple times but a constant times n elments returns n
        // Space complexity is O(n) because multiple variables are declared and initialized with n characters 

        // declare and initialize variable to store string with alphanumeric characters only
        string forward;

        // Sort through the input string and append alphanumeric characters only to a new string variable
        for(auto const& c : s)
        {
            if(isalnum(c)) forward.push_back(tolower(c));
        }

        // Declare and initialize a new string to the strip string
        string backward = forward;

        // Reverse the backward string
        reverse(backward.begin(), backward.end());

        // compare the strings and return the comparison result
        return forward == backward;
    }
};
