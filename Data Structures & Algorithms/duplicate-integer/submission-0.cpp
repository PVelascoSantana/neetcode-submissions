class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty()) return false;

        vector<int> aux = nums;

        sort(aux.begin(), aux.end());

        for(int i = 0; i + 1 < aux.size(); ++i){
            if(aux[i] == aux[i + 1])
                return true;
        }

        return false;
    }
};