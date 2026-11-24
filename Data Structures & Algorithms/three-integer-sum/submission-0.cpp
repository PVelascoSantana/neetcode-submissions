class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i + 2 < nums.size(); ++i){

            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int target = -nums[i];
            int * left = &nums[i + 1];
            int * right = &nums[nums.size() - 1];

            while(left < right){
                if(*left + *right > target){
                    right--;
                    continue;
                }

                if(*left + *right < target){
                    left++;
                    continue;
                }

                if(*left + *right == target){
                    result.push_back({*right, *left, nums[i]});

                    while(left < right && *left == *(left + 1))
                        left++;

                    while(left < right && *right == *(right - 1))
                        right--;  

                    left++;
                    right--;
                }
            }
        }

        return result;
    }
};
