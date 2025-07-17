class Solution {
    public:
        int maxArea(vector<int>& height) {
    
            int n = height.size();
            int l = 0, r = n-1;
            int max_val = 0;
    
            while ( 0 < r && n > l) {
                int w = r - l;
                int h = min(height[l], height[r]);
                max_val = max(max_val, w * h);
    
                if (height[l] < height[r]) l++; // key: move the lower line
                else r--;
    
            }
            
            return max_val;
        }
    };