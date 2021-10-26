class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        const int n = nums.size();                //size of given array

        int product = 1;                            //initialized to calculate product of all elements in given array
        int product_of_nonzeros = 1;                //initialized to calculate product of all elements in given array except 0's
        int count_zeros = 0;                        //initialized to calculate count of zeros in given array
        
        for(int x : nums){
            product *= x;                           //Product of elements in given array
            
            if(x == 0){
                count_zeros++;
            }
            
            else{
                product_of_nonzeros *= x;           //Product of elements in given array except 0's
            }
        }
        
        vector<int> ans(n);                         //output vector
        if(product != 0){
            for(int i=0; i<n; i++){
                ans[i] = product / nums[i];         //Computing Output vector if {product != 0}
            }  
        }
        
        else if(count_zeros == 1){
            for(int i=0; i<n; i++){
                if(nums[i] == 0){
                    ans[i] = product_of_nonzeros;   //Computing Output vector if {count_zeros == 1}
                }
            } 
        }
        
        else{
            //do Nothing
        }
        
        return ans;
    }
};