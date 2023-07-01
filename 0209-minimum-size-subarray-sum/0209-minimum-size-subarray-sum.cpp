class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = nums.size();
        int ans = INT_MAX;
        long int sum = 0;
        int l = 0, r = 0;

        while(r < len){ 

            // if(l == len){
            //     break;
            // }         

            // if(sum < target){
            //   if(l == r && r == len - 1){
            //      sum += 0;
            //   } else {
                sum += nums[r++];
            //   }
            // }

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