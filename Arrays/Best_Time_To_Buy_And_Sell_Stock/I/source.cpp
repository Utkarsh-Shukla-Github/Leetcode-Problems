class Solution {
public:
    int maxProfit(vector<int>& A) {
        int n = A.size();                                 
        int local_max = 0, global_max = 0;                       
        for(int i=1; i<n; i++) {
            local_max = max(0, local_max += A[i] - A[i-1]);
            global_max = max(global_max, local_max);
        }
        return global_max;
    }
};
