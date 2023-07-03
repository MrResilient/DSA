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
        ListNode *curr = head;
        ListNode* dummy = new ListNode(0, head);
        ListNode *prev = dummy;

        while(curr){
            ListNode *nd = curr->next;
            if(curr->val == val){
                prev->next = nd;
            } else {
               prev = curr;
            }
            curr = curr->next;
        }
        return dummy->next;
    }
};