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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){
            return head;
        }
        int len = 1;
        ll tail =  head;
        while(tail->next){
            ++len;
            tail = tail->next;
        }
        k = k % len;
        if(k == 0){
            return head;
        }
        
        ll curr = head;
        int n = len - k - 1;
        while(n--){
            curr = curr->next;
        }
        ll newhead = curr->next;
        curr->next = nullptr;
        tail->next = head;
        return newhead;
    }
};