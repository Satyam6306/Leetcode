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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* count = l1;
        int lenL1 = 0;
        while (count != nullptr) {
            lenL1++;
            count = count->next;
        }
        
        count = l2;
        int lenL2 = 0;
        while (count != nullptr) {
            lenL2++;
            count = count->next;
        }
        if (lenL2 > lenL1) {
            return addTwoNumbers(l2, l1);
        }
        
        int carry = 0;
        while (p != nullptr && q != nullptr) {
            int sum = p->val + q->val + carry;
            p->val = sum % 10;
            carry = sum / 10;
            p = p->next;
            q = q->next;
        }

        while (p != nullptr) {
            int sum = p->val + carry;
            p->val = sum % 10;
            carry = sum / 10;
            p = p->next;
        }
        if (carry == 1) {
            ListNode* tail = new ListNode();
            tail->val = 1;
            count = l1;

            while (count->next != nullptr) {
                count = count->next;
            }
            count->next = tail;
        }

        return l1;
    }
};