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
        
        unordered_set<int> set;

        // this loop will terminate as it detects loop when it find n already present in set in any iteration using count() function.
        while(n != 1 && !(set.count(n))){
            set.insert(n);
            n = nxt_form(n);
        }

        return n == 1;
    }
};