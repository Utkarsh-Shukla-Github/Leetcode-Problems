class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        const int n = nums.size();              //size of given array

        if(n > 1){

            int slow = nums[0];                 //initialized slow pointer
            int fast = nums[nums[0]];           //initialized fast pointer
            
            while(slow != fast){
                slow = nums[slow];              //Moves 1 steps
                fast = nums[nums[fast]];        //Moves 2 steps
            }
            
            fast = 0;                           //reinitialize fast pointer to start

            while(fast != slow){
                fast = nums[fast];              //Moves 1 steps
                slow = nums[slow];              //Moves 1 steps
            }
            
            return slow;                        //Duplicate Number
        }
        
        return -1;
    }
};