class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int ans = INT_MAX;
        int len = nums.size();
        int l = 0, r = k - 1;
        sort(nums.begin(), nums.end());
        
        while(r < len){
            ans = min(ans, nums[r++] - nums[l++]);
        }
        return ans;
    }
};