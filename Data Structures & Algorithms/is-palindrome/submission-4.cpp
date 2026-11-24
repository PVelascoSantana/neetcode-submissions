class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());

        char * right = s.data();
        char * left = s.data() + s.size() - 1; 

        while(right < left){
            
            if(!isalnum(*right)){
                right++;
                continue;
            }

            if(!isalnum(*left)){
                left--;
                continue;
            }

            if(tolower(*right) != tolower(*left))
                return false;

            right++;
            left--;
        }

        return true;
    }
};
