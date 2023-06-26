class Solution {
public:
    int nxt_form(int n){
        int val = 0;

        while(n > 0){
            int k = n % 10;
            val += k*k;
            n = n/10;
        }
        return val;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = nxt_form(n);

        while(slow != fast && fast != 1){
            slow = nxt_form(slow);
            fast = nxt_form(nxt_form(fast));
        }

        if(fast == 1){
            return true;
        }

        return false;
    }
};