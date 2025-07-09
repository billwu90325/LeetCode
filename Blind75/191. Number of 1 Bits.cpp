class Solution {
    public:
        int hammingWeight(int n) {
            int sum = 0;
            for (int i = 31; i >= 0; i--) {
                long exp = pow(2, i);
                sum += n / exp;
                n = n % exp;
            }
            return sum;
        }
    };