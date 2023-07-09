class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int len = nums.size();
        for(int i = 0; i < len; ++i){
            if(s.count(nums[i])){
                return nums[i];
            } else {
               s.insert(nums[i]);
            }
        }
        return 0;
    }
};