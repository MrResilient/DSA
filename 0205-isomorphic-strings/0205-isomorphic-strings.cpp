class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> m1;
        unordered_map<char, vector<int>> m2;
        int len = s.length();
        for(int i = 0; i < len; ++i){
            m1[s[i]].push_back(i);
            m2[t[i]].push_back(i);

            if(m1[s[i]] != m2[t[i]]){
                return false;
            }
        }
        return true;
    }
};