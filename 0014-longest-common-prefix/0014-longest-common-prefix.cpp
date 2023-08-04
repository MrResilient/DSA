class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len1 = strs[0].size();
        int len2 = strs.size();
        string res = "";
        for(int i = 0; i < len1; ++i){
            for(int j = 0; j < len2; ++j){
                if(i == strs[j].size() || strs[j][i] != strs[0][i]){
                    return res;
                }
            }
            res += strs[0][i];
        }

        return res;
    }
};