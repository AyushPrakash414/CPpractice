
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*prev=NULL;
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if (prev==NULL){
            head=head->next;
        }
        else{
            prev->next=slow->next;
        }
        return head;
        
    }
};
