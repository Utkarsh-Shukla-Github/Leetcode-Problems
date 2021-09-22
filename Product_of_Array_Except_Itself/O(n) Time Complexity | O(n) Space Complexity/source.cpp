class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();                            //size of given arrays

        vector<int> pref_product;                       //initialize prefix array

        pref_product.push_back(1);

        for(int x : nums){
            pref_product.push_back(pref_product.back() * x);                    //Computing Prefix Product 
        }
        
        vector<int> suf_product(n+1);                   //initialize suffix array

        suf_product[n] = 1;
        
        for(int i=n-1; i>=0; --i){
            suf_product[i] = suf_product[i + 1] * nums[i];                      //Computing Suffix Product
        }
        
        vector<int> ans(n);                             //output vector

        for(int i=0; i<n; i++){
            ans[i] = pref_product[i] * suf_product[i+1];                        //Computing Answer Array
        }
        
        return ans;
    }
};