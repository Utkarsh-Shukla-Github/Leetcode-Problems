// O(n*2^n) Time Complexity | O(n) Space Complexity

class Solution {
public:
    void backtrack(int first, int remSize, vector<int>& nums, vector<int>& current, vector<vector<int>>& output){
        
        if(remSize == 0){
            output.push_back(current);                              //if the combination is done
            return;
        }
        
        const int offset = remSize - 1; 
        
        for(int i = first; i<nums.size() - offset; i++){
            
            current.push_back(nums[i]);                             //add element to current combination                        
            
            backtrack(i+1, offset, nums, current, output);          //use next integer to complete the combination
            
            current.pop_back();                                     //backtrack
        }
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        const int n = nums.size();
        
        vector<int> current;
        vector<vector<int>> output; 

        for(int i=0; i<=n; i++){
            backtrack(0, i, nums, current, output);
        }
        
        return output;
    }
};