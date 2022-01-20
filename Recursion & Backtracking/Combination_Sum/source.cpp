// O(2^t * k) Time Complexity | O(k * {Number of Combination} Space Complexity) 

class Solution {

private: 
    vector<vector<int>> ans; 
    void findCombination(int ind, int target, vector<int> &candidates, vector<int>&ds) {

        // base case
        if(ind == candidates.size()) {
            if(target == 0) {
                ans.push_back(ds); 
            }
            return; 
        }

        // pick up the element 
        if(candidates[ind] <= target) {
            ds.push_back(candidates[ind]); 
            findCombination(ind, target - candidates[ind], candidates, ds); 
            ds.pop_back(); 
        }
        
        findCombination(ind+1, target, candidates, ds); 
        
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds; 
        findCombination(0, target, candidates, ds); 
        return ans; 
    }
};