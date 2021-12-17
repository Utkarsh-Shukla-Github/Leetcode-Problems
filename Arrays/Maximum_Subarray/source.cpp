// O(n) Time Complexity | O(1) Space Complexity

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int local_max = 0;
        int global_max = INT_MIN;
        
        for(int i=0; i<n; i++){
            local_max = max(nums[i], local_max + nums[i]);
            global_max = max(local_max, global_max);
        }
        
        return global_max;
    }
};