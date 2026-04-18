class Solution {
public:
    string encode(vector<string>& strs) {
        string encode = "";
        for(auto const& s : strs)
        {
            for(auto const& c : s)
            {
                int asciiVal = static_cast<int>(c);
                encode += to_string(asciiVal);
                encode += " ";
            }
            encode += '\n';
        }
        

        return encode;
    }

    vector<string> decode(string s) {
        vector<string> decode;

        string tempStr = "";
        string asciiVal = "";
        
        for(auto const& c : s)
        {
            if(isspace(c) && c != '\n')
            {
                
                int asciiValInt = stoi(asciiVal);
                tempStr += static_cast<char>(asciiValInt);
                asciiVal = "";
                continue;
            }
            else if(c == '\n')
            {
                decode.push_back(tempStr);
                tempStr = "";
                continue;
            }
            else
            {
                asciiVal += c;
            }   
        }

        return decode;
    }
};
