class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;

        int * left = numbers.data();
        int * right = &numbers[numbers.size() - 1];

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
                result.push_back(left - numbers.data() + 1);
                result.push_back(right - numbers.data() + 1);
                break;
            }
        }
        return result;
    }
};
