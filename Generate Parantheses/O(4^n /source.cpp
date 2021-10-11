class Solution {
private: 
    vector<string> ans;
    
    void backTrack(string& current, int n, int open, int close){
        if(open == n && close == n){
            ans.push_back(current);
            return;
        }
        
        if(open < n){
            current.push_back('(');
            backTrack(current, n, open + 1, close);
            current.pop_back();
        }
        if(close < open){
            current.push_back(')');
            backTrack(current, n, open, close + 1);
            current.pop_back();
        }
    }
    
public:
    vector<string> generateParenthesis(int n) {
        string current;
        int open, close;
        backTrack(current, n, 0, 0);
        return ans;
    }
};