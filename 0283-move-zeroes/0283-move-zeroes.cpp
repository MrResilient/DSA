class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int zero_count = count(nums.begin(), nums.end(), 0);

        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());

        while(zero_count--){
            nums.push_back(0);
        }               

    }
};