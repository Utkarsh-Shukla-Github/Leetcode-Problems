// O(2^t * k) Time Complexity | O(k * {Number of Combination} Space Complexity) 

class Solution {    
private: 
    vector<vector<int>> ans;
    void findCombination(int ind, int target, vector<int> &candidates, vector<int>&ds) {
        if(target==0) {
            ans.push_back(ds);
            return;
        }        
        for(int i = ind;i<candidates.size();i++) {
            if(i>ind && candidates[i]==candidates[i-1]) continue; 
            if(candidates[i]>target) break; 
            ds.push_back(candidates[i]);
            findCombination(i+1, target - candidates[i], candidates, ds); 
            ds.pop_back(); 
        }
}
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> ds; 
        findCombination(0, target, candidates, ds); 
        return ans; 
    }
};