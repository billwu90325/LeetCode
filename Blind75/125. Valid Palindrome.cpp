class Solution {
    public:
        bool isPalindrome(string s) {
            
            // Improved SOL: save space complexity, check the original array directly
            int left = 0;
            int right = s.size() -1;
    
            while (left < right) {
                while (left < right && !isalnum(s[left])) left++;
                while (left < right && !isalnum(s[right])) right--;
    
                if (tolower(s[left]) != tolower(s[right])) return false;
                left ++;
                right --;
            }
    
            return true;
    
            // vector<char> text;
            // for (int i = 0; i < s.length(); i++) {
            //     if ((s[i] <= 'Z' && s[i] >= 'A') || 
            //         (s[i] <= 'z' && s[i] >= 'a') ||
            //         (s[i] >= '0' && s[i] <= '9')) {
            //         text.push_back(tolower(s[i]));
            //     }
            // }
    
            // int left = 0;
            // int right = text.size() - 1;
            // while (left < right) {
            //     if (text[left] == text[right]) {
            //         left ++;
            //         right --;
            //     } else return false;
            // }
            // return true;
        }
    };