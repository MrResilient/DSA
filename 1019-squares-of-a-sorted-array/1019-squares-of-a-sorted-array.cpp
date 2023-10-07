class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        int l = 0, r = len - 1;
        vector<int> res(len);
        for(int i = len - 1; i>=0; i--){
            if(nums[l] > nums[r]){
                res[i] = nums[l]*nums[l];
                ++l;
            } else {
                res[i] = nums[r]*nums[r];
                --r;
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};