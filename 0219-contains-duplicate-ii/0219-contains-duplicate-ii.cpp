class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> num_set;
        int len = nums.size();

        int l = 0, r = 0;

        while(r < len){
            if(r - l > k){
                num_set.erase(nums[l]);
                l++;
            }

            if(num_set.count(nums[r])){
                return true;
            }
            num_set.insert(nums[r]);
            r++;
        }
        return false;
    }
};