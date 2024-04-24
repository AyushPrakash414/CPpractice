class Solution {
public:
    int LengthOfLinklist(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || k == 0)
            return head;

        int length = LengthOfLinklist(head);
        k = k % length; // Correct k to be within the range of the list length

        if (k == 0) // If k is multiple of length or length is 0, no rotation is needed
            return head;

        ListNode* fast = head;
        ListNode* slow = head;

        // Move fast pointer k steps ahead
        for (int i = 0; i < k; i++) {
            if (fast->next == NULL) // Handle the case where k is greater than the length of the list
                fast = head;
            else
                fast = fast->next;
        }

        // Move both pointers until fast reaches the end
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        // Adjust pointers to perform rotation
        ListNode* new_head = slow->next;
        slow->next = NULL;
        fast->next = head;

        return new_head;
    }
};
