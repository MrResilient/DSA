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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ll dummy = new ListNode();
        ll curr = dummy;
        int carr = 0;

        while(l1 || l2){
            int v1, v2;

            if(l1){
                v1 = l1->val;
            } else {
                v1 = 0;
            }

            if(l2){
                v2 = l2->val;
            } else {
                v2 = 0;
            }

            int sum = v1 + v2 + carr;
            carr = sum/10;

            curr->next = new ListNode(sum%10);
            curr = curr->next;

            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
        }        
         if (carr == 1) {
            curr->next = new ListNode(1);
        }

        return dummy->next;
    }
};