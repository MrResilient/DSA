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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next){
            return nullptr;
        }
        ll slow = head, fast = head;        
        int flag = 0;
        while(n > 0){
            fast = fast->next;
            n--;
        }

        if (fast == NULL) {
            return head->next;
        }

        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        
            slow->next = slow->next->next;
        
        return head;
    }
};