class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
        
            unordered_set<int> num(nums.begin(), nums.end());
            int max_len = 0;
    
            for (int n : num) {
                if (num.find(n - 1) == num.end()) {
                    int len = 1;
                    while (num.find(n + len) != num.end()) len ++;
                    max_len = max(max_len, len);
                }
            }
    
            return max_len;
    
            // SOL1: sorting
            // Time Complexity: O(nlogn)
            /*
            if (nums.size() == 1) return 1;
    
            sort(nums.begin(), nums.end());
            int max_len = 0, current = 1;
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] == nums[i-1] + 1) current++;
                else if (nums[i] == nums[i-1]) ;
                else current = 1;
                max_len = max(max_len, current);
            }
            return max_len;
            */
    
        }
    };