// O(n) Time Complexity | O(n) Space Complexity

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> sum;
        vector<int> index;
        for(int i=0;i<nums.size();i++)
            sum.push_back({nums[i],i});
        sort(sum.begin(),sum.end());
        int i = 0, j = nums.size() - 1;
        while(i < j) {
            if(sum[i].first + sum[j].first == target) {
                index.push_back(sum[i].second);
                index.push_back(sum[j].second);
                break;
            }
            else if(sum[i].first + sum[j].first < target) {
                i++;
            }
            else j--;
        }
        
        return index;
    }
};