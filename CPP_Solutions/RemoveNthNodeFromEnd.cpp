/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev;

        while(n != 0){
            if(fast != NULL) fast = fast->next;
            n--;
        }

        if(fast == NULL) return head->next;

        while(fast != NULL){
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }

        prev->next = slow->next;

        return head;

    }
};
