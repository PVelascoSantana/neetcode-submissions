class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        string aux_s = s;
        string aux_t = t;

        sort(aux_s.begin(), aux_s.end());
        sort(aux_t.begin(), aux_t.end());

        if(aux_s == aux_t) return true;

        return false;
    }
};
