class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<array<int, 26>, vector<string>> data;

        for(int i = 0; i < strs.size(); ++i){
            string aux_s = strs[i];
            array<int, 26> aux_a{};

            for(int j = 0; j < aux_s.length(); ++j){
                int pos = aux_s[j] - 'a';
                aux_a[pos]++;
            }

            data[aux_a].push_back(aux_s);
        }
        
        for(auto& entry : data)
            result.push_back(entry.second);

        return result;
    }
};
