class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            // SOL1: mathematics 
            /*
            int n = nums.size();
            int sum = accumulate(nums.begin(), nums.end(), 0); // accumulate(head, tail, initial)
            int wmissing = (pow(n, 2) + n)/2;
            return wmissing - sum;
            */
    
            // SOL2: XOR operator (^=)
            int n = nums.size();
            int tmp = n;
            for (int i = 0; i < n; i++) {
                tmp ^= i; 
                tmp ^= nums[i];
            }
            return tmp;
            
        }
    };