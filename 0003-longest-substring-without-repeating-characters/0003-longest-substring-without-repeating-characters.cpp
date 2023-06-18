class Solution {
public: 

    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int l = 0, r = 0;
        int len = s.size();
        unordered_set<char> char_set;
        while(r < len){
            if(char_set.find(s[r]) == char_set.end()){ //character not found
                char_set.insert(s[r]);
                res = max(res, r - l + 1); // updatting and storing length
                r++;    //moving rightendpoint of window
            }else{  //character found so removing from set
                char_set.erase(s[l]);
                l++; // mocing leftendpoint of window
            }
        }
        return res;
    }
};