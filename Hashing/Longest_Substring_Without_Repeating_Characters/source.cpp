class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left = 0, right = 0;
        vector<int>hashFn(256, -1);
        int count = 0;
        while(right < n){
            if(hashFn[s[right]] != -1) left = max(hashFn[s[right]] + 1, left) ;
            hashFn[s[right]] = right;
            
            count = max(count, right - left + 1);
            right++;
        }
        return count;
    }
};