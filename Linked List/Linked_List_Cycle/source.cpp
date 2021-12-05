// O(n) Time Complexity | O(1) Space Complexity

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head ;
        ListNode *slow = head ;
        while(slow && fast && fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(slow == fast) return true;
        }
        return false;
    }
};