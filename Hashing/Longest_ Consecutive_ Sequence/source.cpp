// O(n) Time Complexity | O(n) Space Complexity

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashSet(begin(nums), end(nums));
        
        int longestStreak = 0;
        for(int num: nums){
            if(!hashSet.count(num - 1)){                        //if preceding number is not the part of the hashSet
                int currentNum = num;
                int currentStreak = 1;
                
                while(hashSet.count(currentNum + 1)){           //checking for consecutive numbers
                    currentNum += 1;
                    currentStreak += 1;
                }
              longestStreak = max(currentStreak, longestStreak);  
            }
        }
        
        return longestStreak;
    }
};