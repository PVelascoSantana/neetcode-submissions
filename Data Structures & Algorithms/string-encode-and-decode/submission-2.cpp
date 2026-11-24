class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        char limit = '#';

        for(int i = 0; i < strs.size(); ++i){
            result += to_string(strs[i].length()) + limit;
            result += strs[i];
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result; 
        char limit = '#';

        for(int i = 0; i < s.length(); ++i){
            string word;
            string number;
            int aux = i;

            while(s[aux] != limit){
                number += s[aux];
                aux++;
            }

            int length = stoi(number);

            word = s.substr(aux + 1, length);

            result.push_back(word);

            i = aux + length;
        }
        
        return result;
    }
};
