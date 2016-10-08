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
        int carry = 0;
        ListNode * p1 = l1;
        ListNode * p2 = l2;
        ListNode dummy(0);
        dummy.next = NULL;
        ListNode *p = &dummy;

        while(p1 || p2){
            ListNode * s = new ListNode(0);
            int num1 = (p1 == NULL ? 0 : p1->val);
            int num2 = (p2 == NULL ? 0 : p2->val);
            int value = carry + num1 + num2;
            s->val = value % 10;
            carry = value / 10;
            s->next = NULL;
            p->next = s;
            p1 = (p1 == NULL ? NULL : p1->next);
            p2 = (p2 == NULL ? NULL : p2->next);
            p = p->next;
        }
        if(carry){
            ListNode * s = new ListNode(1);
            s->next = NULL;
            p->next = s;
        }

        return dummy.next;
    }
};
