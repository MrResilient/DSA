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
    ListNode* swapPairs(ListNode* head) {
        ll tmp = head;
        while(tmp && tmp->next){
            int k = tmp->val;
            tmp->val = tmp->next->val;
            tmp->next->val = k;
            tmp = tmp->next->next;
        }
        return head;
    }
};