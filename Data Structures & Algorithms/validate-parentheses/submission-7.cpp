class Solution {
public:
    bool isValid(string s) {
        stack<char> validate;

        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                validate.push(s[i]);
            }
            else{
                if(validate.empty()) return false;

                if(s[i] == ')' && validate.top() == '('){
                    validate.pop();
                }
                else if(s[i] == ']' && validate.top() == '['){
                    validate.pop();
                }
                else if(s[i] == '}' && validate.top() == '{'){
                    validate.pop();
                }
                else{
                    return false;
                }
            }
        }

        return validate.empty();
    }
};
