// O(max(m,n)) Time Complexity | O(max(m,n)) Space Complexity

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // base case
        if(l1 == nullptr && l2 == nullptr) return nullptr;
		
        int sum = 0;
        if(l1 != nullptr){
            sum += l1->val;
            l1 = l1->next;
        }
            
        if(l2 != nullptr){
            sum += l2->val;
            l2 = l2->next;
        }
        
        ListNode* res = new ListNode(sum%10);
	
        // if sum > 9 ( not a digit) carry 1 to next node
        if(sum > 9){
            if(l1 != nullptr) l1->val ++;
                
            else if(l2 != nullptr) l2->val ++;
                
            else{
	    // if both l1 and l2 are nullptr,  create new node with value 1
                res->next = new ListNode(sum/10);
                return res;
            }
                
        }
            
        res->next = addTwoNumbers(l1, l2);
        
        return res;
    }
};