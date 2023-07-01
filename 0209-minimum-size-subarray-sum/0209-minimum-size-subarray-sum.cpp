class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = nums.size();
        int ans = INT_MAX;
        long int sum = 0;
        int l = 0, r = 0;

        while(r < len){ 

            sum += nums[r++];

            while(sum >= target){
                ans = min(ans, r - l );
                sum -= nums[l++];
            }
            
        }
        
        if(ans == INT_MAX){
            return 0;
        }
        
        return ans;        
    }
};