class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len  = nums.size();
        int ans = 0;
        for(auto it : nums)
            ans ^= it;
            
        return ans;
    }
};