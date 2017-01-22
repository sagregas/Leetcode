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
    ListNode* swapPairs(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;

        ListNode* temp = head->next;
        head->next = head->next->next;
        temp->next = head;
        head = temp;
        head->next->next = swapPairs(head->next->next);

        return head;

    }
};
