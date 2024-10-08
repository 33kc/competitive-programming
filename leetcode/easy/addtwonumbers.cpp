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
        ListNode* x = new ListNode(0);
        ListNode* y = x;
        int car =0;
        while (l1 != nullptr || l2 != nullptr || car != 0)
        {
            int d1 = (l1 != nullptr) ? l1->val : 0;
            int d2 = (l2 != nullptr) ? l2->val : 0;

            int sum = d1 + d2 + car;
            int digit = sum % 10;
            car = sum / 10;

            ListNode* newNode = new ListNode(digit);
            y->next = newNode;
            y = y ->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        ListNode* result = x->next;
        delete x;
        return result;
    }
};
