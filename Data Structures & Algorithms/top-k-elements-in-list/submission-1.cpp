class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> freq;
        vector<vector<int>> buckets(nums.size() + 1);
        
        for(int num : nums)
            freq[num]++;

        for(auto& entry : freq)
            buckets[entry.second].push_back(entry.first);

        for(int i = buckets.size() - 1; i >= 0 && result.size() < k; --i){
            for(int num : buckets[i]){
                result.push_back(num);
                if(result.size() == k) break;
            }
        }

        return result;
    }
};
