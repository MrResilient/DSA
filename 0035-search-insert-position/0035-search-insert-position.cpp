class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int l = 0, r = len - 1;

        while(l <= r){
            int mid = (l + r)/2;
            if(nums[mid] < target){
                l = mid + 1;
            } else {
                r = mid - 1;
            }             
        }

        return l;
        
    }
};