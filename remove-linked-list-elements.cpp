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
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*fast=head;
      while(head!=NULL&&head->val==val){
        head=head->next;
      }
        if (head==NULL){
            return head;
        }
        while(fast!=NULL&&fast->next!=NULL){
                       
           if (fast->next->val==val){
            fast->next=fast->next->next;
           }else{
           fast=fast->next;}

        }
        return head;
    }
};
