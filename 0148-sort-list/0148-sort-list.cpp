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

    ll merge(ll lst1, ll lst2){
        ll dummy = new ListNode();
        ll tail = dummy;
        while(lst1 && lst2){
            if(lst1->val < lst2->val){
                tail->next = lst1;
                lst1 = lst1->next;
            } else {
                tail->next = lst2;
                lst2 = lst2->next;
            }
            tail = tail->next;
        }
        if(lst1){
            tail->next = lst1;
        }
        if(lst2){
            tail->next = lst2;
        }
        return dummy->next;
    }

    ll sort_lst(ll head){
        vector<int> vec;
        ll curr = head;
        while(curr){
            vec.push_back(curr->val);
            curr = curr->next;
        }
        sort(vec.begin(), vec.end());
        ll dummy = new ListNode();
        ll tmp = dummy;
        
        int len = vec.size();
        for(int i = 0; i < len; ++i){
            // tmp->val = vec[i];
            tmp->next = new ListNode(vec[i]);
            tmp = tmp->next;
        }
        return dummy->next;
    }

    ll getmid(ll head){
        ll slow = head, fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        //split linkedlist
        ll left = head, right = getmid(head);

        ll tmp = right->next;
        right->next = nullptr;
        right = tmp;
        //sorting 2 splitted linked_list
        left = sort_lst(left);
        right = sort_lst(right);
        //merging 2 splitted linked_list
        return merge(left, right);
    }
};