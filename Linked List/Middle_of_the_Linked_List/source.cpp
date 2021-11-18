//  O(n) Time Complexity | O(1) Space Complexity  

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(slow && fast && fast-> next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
};