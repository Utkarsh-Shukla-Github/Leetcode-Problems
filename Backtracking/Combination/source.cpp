// O(k*n^k) Time Complexity | O(n) Space Complexity

class Solution {

vector<vector<int>> ans;
    
private:
    void recCombination(int idx, int k, vector<int>& current, int n) {
        if(current.size() == k) {
            ans.push_back(current);
            return;
        }
        
        for(int i=idx; i<=n; i++) {
            current.push_back(i);
            recCombination(i+1, k, current, n);
            current.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        recCombination(1, k, current, n);
        return ans;
    }
};