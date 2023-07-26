class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.size();
        int hash[26] = {0};
        for(int i = 0; i < len; ++i){
            hash[s[i] - 'a']++;
        }
        int flg = 0;
        int ans = 0;
        for(int i = 0; i < len; ++i){
            if(hash[s[i] - 'a'] == 1){
                ans = i;
                flg = 1;
                break;
            }
        }
        if(flg == 0){
            ans = -1;
        }
        return ans;
    }
};