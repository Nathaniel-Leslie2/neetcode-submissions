class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        unordered_map<char, char> map = {{')', '('}, {'}', '{'}, {']', '['}};

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                charStack.push(s[i]);
                continue;
            }

            if(!charStack.empty() && charStack.top() == map[s[i]]) charStack.pop();
            else return false;
        }

        return charStack.empty();
    }
};
