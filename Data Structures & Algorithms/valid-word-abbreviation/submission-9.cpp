class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        string digit = "";
        int wordIndex = 0;

        for(int i = 0; i < abbr.size(); i++)
        {
            if(!isdigit(abbr[i]))
            {
                if(wordIndex > word.size() || abbr[i] != word[wordIndex]) return false;
                wordIndex++;
                continue;
            }
            if(isdigit(abbr[i]))
            {
                if(abbr[i] == '0') return false;
                while(i < abbr.size() && isdigit(abbr[i])) 
                {
                    digit += abbr[i];
                    i++;
                }
            }
            if(!digit.empty())
            {
                wordIndex += stoi(digit);
                if(wordIndex > word.size()) return false;
                if(i < abbr.size() && abbr[i] != word[wordIndex]) return false;

                wordIndex++;
                digit = "";
            }
        }

        return true;
    }
};