//  O(n) Time Complexity | O(1) Space Complexity 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevNode = NULL;
        ListNode* nextNode = NULL;
        
        while(head){
            nextNode = head -> next;
            head -> next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        
        return prevNode;
    }
};