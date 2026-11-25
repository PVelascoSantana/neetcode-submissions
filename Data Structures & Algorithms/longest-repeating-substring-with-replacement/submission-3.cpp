class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int max_window = 0;
        int current_window = 0; 
        int max_freq = 0;
        int replacements = 0;
        int left = 0;

        for(int i = 0; i < s.length(); ++i){
            freq[s[i]]++;
            
            if(freq[s[i]] > max_freq) max_freq = freq[s[i]];

            current_window = (i - left) + 1;
            replacements = current_window - max_freq;

            while(replacements > k){
                freq[s[left]]--;
                left++;
                current_window = (i - left) + 1;
                replacements = current_window - max_freq;
            } 

            if(current_window > max_window) max_window = current_window;
        }

        return max_window;
    }
};
