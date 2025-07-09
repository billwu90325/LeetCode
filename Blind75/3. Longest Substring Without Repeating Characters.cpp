class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_map<char, int> last_index;
            int max_len = 0, start = 0;
    
            for (int i = 0; i < s.length(); i++) {
                if (last_index.count(s[i]) && last_index[s[i]] >= start) { // '=' -> duplicate at first char
                    start = last_index[s[i]] + 1;
                }
    
                last_index[s[i]] = i;
                max_len = max(max_len, i - start + 1);
            }
    
            return max_len;
        }
    };