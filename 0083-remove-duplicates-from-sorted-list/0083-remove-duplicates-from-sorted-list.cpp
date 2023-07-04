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
    ListNode* deleteDuplicates(ListNode* head) {
       ll slow = head, fast = head;

       while(slow){
           while(fast && slow->val == fast->val){
               fast = fast->next;
           }
           slow->next = fast;
           slow = fast;
       }
        return head;
    }
};