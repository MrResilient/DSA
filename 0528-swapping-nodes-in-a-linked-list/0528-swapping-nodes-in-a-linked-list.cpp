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
    ListNode* swapNodes(ListNode* head, int k) {
        ll curr = head;

        while(--k){
            curr = curr->next;
        }

        ll left = curr;
        ll right = head;
        
        while(curr->next){
            curr = curr->next;
            right = right->next;
        }

        int tmp = right->val;
        right->val = left->val;
        left->val = tmp;

        return head;
    }
};