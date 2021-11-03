class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int index = 0, n = matrix.size(), m = matrix[0].size();
        for(int i=0; i<n; i++){
            if(matrix[i][m-1] >= target) {
                index = i;
                break;
            }
        }      
        if(binary_search(matrix[index].begin(), matrix[index].end(), target)) return true;      
        return false;
    }
};