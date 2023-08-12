class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int len = nums.size();
        for(int val : nums){
            int indx = abs(val);
            nums[indx - 1] = 0-abs(nums[indx - 1]);
        }
        for(int i = 1; i <= len; ++i){
            if(nums[i - 1] > 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};