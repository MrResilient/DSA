class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> vec;
        int len = nums.size();
        for(int i = 0; i < len; ++i){
            vec.push_back(nums[i]);
        }
        for(int i = 0; i < len; ++i){
            vec.push_back(nums[i]);
        }
        return vec;
    }
};