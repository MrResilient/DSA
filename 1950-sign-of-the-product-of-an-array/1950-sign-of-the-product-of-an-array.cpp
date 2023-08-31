class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos, neg, zer = 0;
        int len = nums.size();
        
        for(int i = 0; i < len; ++i){
            if(nums[i] > 0){
                ++pos;
            } else if (nums[i] < 0){
                ++neg;
            } else {
                ++zer;
            }
        }

        if(zer > 0){
            return 0;
        } else if (neg&1){
            return -1;
        }
        return 1;
    }
};