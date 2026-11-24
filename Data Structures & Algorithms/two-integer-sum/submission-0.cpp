class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> data;

        int difference = 0;

        for(int i = 0; i < nums.size(); ++i){
            difference = target - nums[i];

            auto it = data.find(difference);

            if(it != data.end()){
                result.push_back(it->second);
                result.push_back(i);
                break;
            }
            else
                data[nums[i]] = i;
        }
        return result;
    }
};
