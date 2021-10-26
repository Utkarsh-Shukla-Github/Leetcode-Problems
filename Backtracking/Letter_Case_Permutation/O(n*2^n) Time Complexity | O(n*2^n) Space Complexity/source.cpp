class Solution {
public:
    // Helper Function
    void permute(string s, vector<string>& result, int i){
        if(i == s.size()){
            result.push_back(s);                                //Push strings in result
            return;
        }
        
        if(isalpha(s[i])){                                      //if character is alphabet then
            s[i] = toupper(s[i]);                               //Change it to uppercase
            permute(s, result, i+1);
            s[i] = tolower(s[i]);                               //Change it to lowercase
            permute(s, result, i+1);
        }
        
        else{
            permute(s, result, i+1);                            //if character is a number
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        permute(s, result, 0);
        return result;
    }
};