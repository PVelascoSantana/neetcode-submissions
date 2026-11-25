class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char, int> freq;
        int left = 0;
        int max = 0;

        for(int i = 0; i < s.length(); ++i){
            freq[s[i]]++;

            while(freq[s[i]] > 1){
                freq[s[left]]--;
                left++;
            }

            if((i - left) + 1 > max) max = (i - left) + 1;
        }

        return max;
        
    }
};
