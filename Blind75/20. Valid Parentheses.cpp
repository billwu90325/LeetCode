class Solution {
    public:
        bool isValid(string s) {
            stack<char> bracket;
            for (int i = s.length() -1; i >= 0; i--) {
                if (!bracket.empty()) {
                    char tmp = bracket.top();
                    if (s[i] == '(') {
                        if (tmp == ')') bracket.pop();
                        else bracket.push(s[i]);
                    } else if (s[i] == '[') {
                        if (tmp == ']') bracket.pop();
                        else bracket.push(s[i]);
                    } else if (s[i] == '{') {
                        if (tmp == '}') bracket.pop();
                        else bracket.push(s[i]);
                    } else {
                        bracket.push(s[i]);
                    }
                } else {
                    bracket.push(s[i]);
                }
    
            }
            if (bracket.empty()) return true;
            else return false;
        }
    };