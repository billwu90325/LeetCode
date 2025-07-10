class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            unordered_map<int, bool> exist;
            for (int i = 0; i < nums.size(); i++) {
                if (exist.count(nums[i])) return true;
                else exist[nums[i]] = true;
            }
            return false;
        }
    };