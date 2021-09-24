class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, int count, string word){
        int rows = board.size(), columns = board[0].size();

        //successfully reached the end
        if(count == word.length()){
            return true;
        }
        
        //out of bounds || current cell has already been visited the cell in board doesn't match with the current char in word
        if(i<0 || i>=rows|| j<0 || j>= columns || board[i][j] != word[count]){
            return false;
        }
        
        char temp = board[i][j];

        //to avoid using of this character again in the backtracking
        board[i][j] = ' ';
        
        //checking resursively if the next adjacent cell contains the next character in the word
        bool found = dfs(board, i+1, j, count+1, word) 
                    || dfs(board, i-1, j, count+1, word) 
                    || dfs(board, i, j+1, count+1, word) 
                    || dfs(board, i, j-1, count+1, word);
        

        // Reassigning the character as backtracking is complete.
        board[i][j] = temp;
        
        return found;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size(), columns = board[0].size();
        
        for(int i=0; i<rows; i++){
            for(int j=0; j<columns; j++){
                
                //checking if the word exists in board
                if(board[i][j] == word[0] && dfs(board, i, j, 0, word)){
                    return true;
                }
            }
        }
        return false;
    }
};