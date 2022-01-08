//  O(n) Time Complexity | O(1) Space Complexity 

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* iter = head;
        Node* front = head;
        
        // First step: Make copy of each node
        // & link them togeather side-by-side in a single list.
        
        while(iter != NULL){
            front = iter->next;
            
            Node* copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            
            iter = front;
        }
        
        // Second step: assign random pointers to copy nodes.
        iter = head;
        
        while(iter != NULL){
            if(iter->random != NULL){
                iter->next->random = iter->random->next;
            }
            iter = iter->next->next;
        }
        
        // Third step: Restore the original list as copy list.
        iter = head;
        Node* pseudoHead = new Node(0);
        Node* copy = pseudoHead;
        
        while(iter != NULL){
            front = iter->next->next;
            
            //extract the copy
            copy->next = iter->next;
            
            //restore the original list
            iter->next = front;
            
            copy = copy->next;
            iter = front;
        }
        
        return pseudoHead->next;
        
    }
};