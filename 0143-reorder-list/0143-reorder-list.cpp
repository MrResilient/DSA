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

    // void merger(ll lst1, ll lst2){
    //      ll head = lst1;
    //      ll curr = head;
    //      lst1 = lst1->next;
    //      int flag = 0;

    //      while(curr){
         
    //      if(flag == 1){
    //          curr->next = lst1;
    //          if(!lst1){
    //              break;
    //          }
    //          curr = lst1;
    //          lst1 = lst1->next;
    //          flag = 0;
    //      }
    //      if(flag == 0){
    //          curr->next = lst2;
    //          curr = lst2;
    //          lst2 = lst2->next;
    //          flag = 1;
    //      }

    //     }

    // }
    void merge(ListNode* l1, ListNode* l2) {
        while (l1 != NULL) {
            ListNode* p1 = l1->next;
            ListNode* p2 = l2->next;
            
            l1->next = l2;
            if (p1 == NULL) {
                break;
            }
            l2->next = p1;
            
            l1 = p1;
            l2 = p2;
        }
    }
    ll reverse(ll head){
        ll prev = nullptr, curr = head, nxt = curr->next;
        while(curr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    } 

    void reorderList(ListNode* head) {
        if(!head->next){
            return;
        }
        ll prev = nullptr, slow = head, fast = head;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = nullptr;
        ll l1 = head;
        ll l2 = reverse(slow);
        merge(l1, l2);
    }
};