/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:  ListNode* ReverseLinklist(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        ListNode*fast=head;
         ListNode*slow=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    
    ListNode*newnode=ReverseLinklist(slow->next);
    ListNode*first=head;
    ListNode*second=newnode;

    while(second!=NULL){
        if(first->val!=second->val){
            ReverseLinklist(newnode);
            return false;
        }
        first=first->next;
        second=second->next;
    }
                ReverseLinklist(newnode);

    return true;
    }
};
