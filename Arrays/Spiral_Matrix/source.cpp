// O(n*m) Time Complexity | O(n) Space Complexity

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1, direction = 0;
        
        vector<int>result;                                              //initialized result vector
        while(top <= bottom && left <= right){
            
            if(direction == 0){                                         //left -> right move
                for(int i=left; i<=right; i++){
                    result.push_back(matrix[top][i]);
                }
                top++;
            }
            
            else if(direction == 1){                                    //top -> bottom move
                for(int i=top; i<=bottom; i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
            }
            
            else if(direction == 2){                                    //right -> left move
                for(int i=right; i>=left; i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            else{                                                       //bottom -> top move
                for(int i=bottom; i>=top; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
            
            direction = (direction + 1) % 4;                            //Changes moving vector direction 
        }
        
        return result;
    }
};