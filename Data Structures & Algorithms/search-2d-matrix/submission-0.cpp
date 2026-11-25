class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right){
            int middle = ((right - left) / 2) + left;

            if(nums[middle] < target){
                left = middle + 1;
            }
            else if(nums[middle] > target){
                right = middle - 1;
            }
            else if(nums[middle] == target){
                return true;
            }
        }

        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int first = 0; 
        int last = matrix.size() - 1;

        while(first <= last){
            int middle = ((last - first) / 2 ) + first;

            if(matrix[middle].back() < target){
                first = middle + 1;
            }
            else if(matrix[middle].front() > target){
                last = middle - 1;
            }
            else if(matrix[middle].back() >= target && matrix[middle].front() <= target){
                return search(matrix[middle], target);
            }
        }

        return false;
    }
};
