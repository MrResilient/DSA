class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int ans = 0;

        unordered_map<int, int> hash(len + 1);

        for(int i = 0; i < len; ++i){
            hash[nums[i]]++;
        }

        for(int i = 0; i < len + 1; ++i){
            if(hash[i] == 0){
                ans = i;
                break;
            }
        }

        return ans;
    }
};