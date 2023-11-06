class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int p1 = 0;
        int p2 = 0;
        int l1 = word1.size();
        int l2 = word2.size();

        while(p1<l1 || p2<l2){
            if(p1 < l1){
                res += word1[p1];
                p1++;
            }

            if(p2 < l2){
                res += word2[p2];
                p2++;
            }
        }

        return res;
    }
};