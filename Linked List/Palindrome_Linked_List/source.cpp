//  O(n) Time Complexity | O(1) Space Complexity 

class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* pre = NULL;
        ListNode* next = NULL;
        
        while(head){
            next = head -> next;
            head -> next = pre;
            pre = head;
            head = next;
        }
        
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL) return true;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(slow && fast && fast->next){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        slow  = reverseList(slow);
        
        
        while(slow){
            if(head -> val != slow -> val) return false;
            head = head -> next;
            slow = slow -> next;
        }
        
        return true;
    }
};