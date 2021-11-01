class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        vector<int> prev, current;
        prev.push_back(1);
        output.push_back(prev);
        numRows--;
        while(numRows--){
            current.push_back(1);
            const int n = prev.size();
            for(auto i=0; i<n-1; i++){
                current.push_back(prev[i] + prev[i+1]);
            }
            current.push_back(1);
            output.push_back(current);
            prev.clear();
            prev = current;
            current.clear();
        }
        return output;
    }
};