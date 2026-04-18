class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        string digit = "";
        int wordIndex = 0;

        for(int i = 0; i < abbr.size(); i++)
        {
            if(!isdigit(abbr[i]) && digit.empty()) 
            {
                if(wordIndex >= word.size() || abbr[i] != word[wordIndex]) return false;
                wordIndex++;
                continue;
            }

            if(isdigit(abbr[i])) 
            {
                if(digit.empty() && abbr[i] == '0') return false;
                digit += abbr[i];
            }
            else if(!digit.empty() && !isdigit(abbr[i])) 
            {
                wordIndex += stoi(digit);
                if(wordIndex >= word.size() || abbr[i] != word[wordIndex]) return false;
                wordIndex++;
                digit = "";
                continue;
            }

            if(i == abbr.size() - 1 && !digit.empty())
            {
                int index = std::stoi(digit) + wordIndex;
                if(index != word.size()) return false;
            }
        }

        return true;
    }
};