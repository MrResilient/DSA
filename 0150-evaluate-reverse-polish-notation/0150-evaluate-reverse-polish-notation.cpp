class Solution {
public:
    int evalRPN(vector<string>& nums) {
        stack<string> stk;
        int len = nums.size();
        for(int i = 0; i < len; ++i){
            if(nums[i] == "+"){
                int val1 = stoi(stk.top());   stk.pop();
                int val2 = stoi(stk.top());   stk.pop();
                int val3 = val1 + val2;
                stk.push(to_string(val3));
                continue;
            } else if (nums[i] == "-"){
                int val1 = stoi(stk.top());   stk.pop();
                int val2 = stoi(stk.top());   stk.pop();
                int val3 = val2 - val1;
                stk.push(to_string(val3));
                continue;
            } else if(nums[i] == "*"){
                int val1 = stoi(stk.top());   stk.pop();
                int val2 = stoi(stk.top());   stk.pop();
                int val3 = val1 * val2;
                stk.push(to_string(val3));
                continue;
            } else if (nums[i] == "/"){
                int val1 = stoi(stk.top());   stk.pop();
                int val2 = stoi(stk.top());   stk.pop();
                int val3 = val2 / val1;
                stk.push(to_string(val3));
            } else {
                stk.push(nums[i]);
            }
        }
        return stoi(stk.top());
    }
};