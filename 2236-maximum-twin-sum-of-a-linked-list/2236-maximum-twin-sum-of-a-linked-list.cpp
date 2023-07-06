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

    int pairSum(ListNode* head) {
        int ans = INT_MIN;
        ll slow = head, fast = head;
        ll prev = nullptr;

        while(fast && fast->next){
            fast = fast->next->next;
            ll tmp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = tmp;
        }

        while(slow){
        //    ans = max(ans, static_cast<int>(prev->val + slow->val));
            ans = max(ans, prev->val + slow->val);
            prev = prev->next;
            slow = slow->next;
        }
        return ans;
    }
};