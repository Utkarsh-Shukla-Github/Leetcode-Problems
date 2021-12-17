// O(n) Time Complexity | O(n) Space Complexity

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        const int n = nums.size();
        map<int, int>mp;
        for(int i=0; i<n; i++) mp[nums[i]]++;
        
        vector<int>ans;
        for(auto i:mp){
            if(i.second > floor(n/3)){
                ans.push_back(i.first);
            }
        }
        
        return ans;
    }
};