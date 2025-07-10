class Solution {
    public:
        vector<int> countBits(int n) {
            vector<int> ans(n + 1, 0);
            for (int i = 1; i <= n; i++) {
                ans[i] = ans[i >> 1] + (i & 1); // abort list bit, add at the end 
                // dp: ans[i] will have one more bit than ans[i/2], des
                // i & 1 <- determine integer is even or odd
            }
            return ans;
        }
    };