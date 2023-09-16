class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if (len <= 2) {
            return len;
        }
        
        int l = 2;  // Start from the third element since the first two are already allowed.
        
        for (int r = 2; r < len; r++) {
            if (nums[r] != nums[l - 2]) {
                nums[l] = nums[r];
                l++;
            }
        }
        
        return l;
    }
};
