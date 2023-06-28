class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int temp_sum = 0;
        for(int i = 0; i<nums.size(); ++i){
            temp_sum += nums[i];
            if( ans < temp_sum){
                ans = temp_sum;
            }
            if(temp_sum < 0){
                temp_sum = 0;
            }
        }
        return ans;
    }
};