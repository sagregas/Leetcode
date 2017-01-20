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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        if(l1 == NULL) return l2;

        if(l2 == NULL) return l1;

        ListNode* l1Counter = l1;
        ListNode* l2Counter = l2;

        int carry = 0;
        int l1val = 0;
        int l2val = 0;

        int countl1 = 0;
        int countl2 = 0;

        while(l1Counter != NULL){
            countl1++;
            l1Counter = l1Counter->next;
        }

        while(l2Counter != NULL){
            countl2++;
            l2Counter = l2Counter->next;
        }

        ListNode* res = countl1 >= countl2 ? l1 : l2;
        ListNode* prev;
        ListNode* retVal = res;

        while(res != NULL){
            if(l1 == NULL){
                l1val = 0;
            }
            else{
                l1val = l1->val;
            }
            if(l2 == NULL){
                l2val = 0;
            }
            else{
                l2val = l2->val;
            }
            res->val = l1val + l2val + carry;
            if(res->val >= 10){
                carry = 1;
                res->val = (res->val)%10;
            }
            else{
                carry = 0;
            }
            prev = res;
            res = res->next;
            if(l1 != NULL) l1 = l1->next;
            if(l2 != NULL) l2 = l2->next;
        }

        if(carry == 1){
            prev->next = new ListNode(1);
        }

        return retVal;
    }
};
