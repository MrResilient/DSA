class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int word_find = 0;
        int ans = 0;
        int indx = 0;
        for(int i = len - 1; i >= 0; i--){
            if(s[i] != 32){
                indx = i;
                break;
            }
        }

        for(int i = indx; i >= 0; i--){
            if(s[i] == 32){
                   break;
                } else {
                    ans++;
                }
        }
        return ans;
    }
};