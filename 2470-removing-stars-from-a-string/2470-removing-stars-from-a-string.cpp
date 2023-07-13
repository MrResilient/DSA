class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        string str;
        int len = s.size();
        for(int i = 0; i < len; ++i){
            if(s[i] == '*'){
                stk.pop();
            } else {
                stk.push(s[i]);
            }
        }
        while(!stk.empty()){
            str.append(1, stk.top());
            stk.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};