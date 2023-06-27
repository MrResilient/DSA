class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec(2*n);

        for(int i = 0, j = 0; i < 2*n; i += 2){
            vec[i] = nums[j++];
        }

        for(int i = 1, j = n; i < 2*n; i += 2){
            vec[i] = nums[j++];
        }

        return vec;
    }
};