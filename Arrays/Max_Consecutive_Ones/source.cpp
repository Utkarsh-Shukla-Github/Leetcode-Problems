// O(N) Time Complexity | O(1) Space Complexity

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int prev = 0, next = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                next++;
                
            }
            else{
                next = 0;
            }
            prev = max(prev, next);
        }
        
        return prev;
    }
};