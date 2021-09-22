class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_set<int> seen;            //initialized an unordered set

        for (auto &num : nums) {
            if (seen.count(num))            //gives 1 if number is duplicated unordered_set::count() method is O(1) in average cases, but in worst case, time complexity can be O(N) i.e. Linear, where N is size of container.
                return num;
            seen.insert(num);
        }
        return -1;
    }
};