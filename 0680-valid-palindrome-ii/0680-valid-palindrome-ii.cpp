class Solution {
public:
    bool chk_Palind(string s, int l, int r){
        while(l < r){ 
            if(s[l] == s[r]){
                ++l; 
                --r;
            } else { 
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int len = s.size();
        int l = 0, r = len - 1;
        while(l < r){
            if(s[l] == s[r]){
                ++l;
                --r;
            } else {
                return chk_Palind(s, l+1, r) || chk_Palind(s, l, r-1);
            }
        }    
        return true;
    }
};