//  O(n) Time Complexity | O(1) Space Complexity 

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        while(!head || !head->next || k==0) return head;
        
        ListNode* cur = head;
        int len = 1;
        
        while(cur->next && ++len) cur = cur->next;
        
        cur->next = head;
        k = k%len;
        k = len-k;
        
        while(k--) cur = cur->next;
        
        head = cur->next;
        cur->next = NULL;
        
        return head;
    }
};