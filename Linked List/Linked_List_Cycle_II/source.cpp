// O(n) Time Complexity | O(1) Space Complexity

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        
        ListNode* slow = head;        
        ListNode* fast = head;
        ListNode* start = head;

        while(slow && fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                while(slow != start){
                    slow = slow->next;
                    start = start->next;
                }
                return start;
            }
        }
        return NULL;
    }
};