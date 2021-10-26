class Solution {
public:
    void sortColors(vector<int>& nums) {
        const int n = nums.size();
        
        int  zeros = 0, ones = 0, twos = 0;
        
        for(int value : nums){
            if(value == 0) zeros++;
            if(value == 1) ones++;
            if(value == 2) twos++;
        }
        
        nums.clear();
            
        while(zeros--){
            nums.push_back(0);
        }
        
        while(ones--){
            nums.push_back(1);
        }
        
        while(twos--){
            nums.push_back(2);
        }
        
    }
};