class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len  = nums.size();
        int ans = 0;
        unordered_map<int, int> vec;
        for(int i = 0; i < len; i++){
            vec[nums[i]]++;
        }

        for(int i=0; i < len; ++i){
            if(vec[nums[i]] == 1){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};