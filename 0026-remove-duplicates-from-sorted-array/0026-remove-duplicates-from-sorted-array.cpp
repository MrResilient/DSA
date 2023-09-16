class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int len = nums.size();
        for(int r = 1; r < len; ++r){
            if(nums[r] != nums[r-1]){
                nums[k] = nums[r];
                k++;
            }
        }
        return k;
    }
};