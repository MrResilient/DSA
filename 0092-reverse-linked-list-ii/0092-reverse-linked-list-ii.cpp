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
 typedef ListNode* ll;
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ll dummy = new ListNode(0, head);
        ll leftprev = dummy;
        ll curr = head;
        int k = left;
        while(--left){
            leftprev = curr;
            curr = curr->next;
        }
        ll prev = nullptr;
        int val = right - k + 1;
        while(val--){
            ll tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        leftprev->next->next = curr;
        leftprev->next = prev;
        return dummy->next;
    }
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           