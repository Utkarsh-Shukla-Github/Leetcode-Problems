// O(n*m) Time Complexity | O(1) Space Complexity

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        const int rows = matrix.size(), columns = matrix[0].size();             //rows & columns size
        
        bool zeroth_column = true;                                              //initialized to check zeros in first column

        for(int i=0; i<rows; i++){

            if(matrix[i][0] == 0) zeroth_column = false;

            for(int j=1; j<columns; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;                            //Sets corresponding first value in rows and columns to 0
                }
            }

        }
        
        for(int i=rows-1; i>=0; i--){

            for(int j=columns-1; j>=1; j--){
                if(matrix[0][j] == 0 || matrix[i][0] ==0) {
                    matrix[i][j] = 0;
                }
            }

            if(!zeroth_column) matrix[i][0] = 0;                                //Sets corresponding column value to 0

        }
    }
};