class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.size();
        int len2 = needle.size();
        if(len1 < len2){
            return -1;
        } else if (len1 == len2){
            if(haystack == needle){
                return 0;
            } else {
                return -1;
            }
        }        

        char c = needle[0];

        for(int i = 0; i < len1 - len2 + 1; ++i){
            if(haystack[i] == c){
                int k = i;
                int cnt = 0;
                for(int j = 0; j < len2; ++j){
                    if(haystack[i+j] != needle[j]){
                        continue;
                    } else {
                        cnt++;
                    }
                    if(cnt == len2){
                        return k;
                    }
                }
            }
        }
        return -1;
    }
};