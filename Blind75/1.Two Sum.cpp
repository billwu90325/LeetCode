class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int, int> map;
        
            for(int i = 0; i < nums.size(); i++) {
                int rest = target - nums[i];
                if (map.count(rest))
                    return {map[rest], i};
                
                map[nums[i]] = i;
            }
    
            return {};
        }
    };