class Solution {

public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(), -1);
        map<int, int> hash;
        int root = 0;
        for(int n : nums1){
            hash[n] = root++; 
        }

        stack<int> stk;
        for(int i = 0; i < nums2.size(); ++i){
            int curr = nums2[i];

            while(stk.size() && curr > stk.top()){
                int val = stk.top();
                stk.pop();
                int indx = hash[val];
                ans[indx] = curr;
            }

            if(hash.count(curr)){  // checks whther current element is present or not
                stk.push(curr);
            }
        }
        return ans;


    }
};