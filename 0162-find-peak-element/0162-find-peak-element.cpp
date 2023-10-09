class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int len = nums.size();
        if(len == 1){
            return 0;
        }

        if(nums[0] > nums[1]){
            return 0;
        }

        if(nums[len - 1] > nums[len - 2]){
            return len - 1;
        }

        int l = 1, r = len - 2;
        while(l <= r){
            int mid = (l + r)/2 ;

            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            } else if (nums[mid]>nums[mid+1] && nums[mid]<nums[mid-1]){
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return 0;
    }
};