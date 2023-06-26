class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int ans = len;

        //XOR is it's own inverse.
        for(int i = 0; i < len; ++i){
            ans ^= (i ^ nums[i]);
        }
                
        return ans;
    }
};