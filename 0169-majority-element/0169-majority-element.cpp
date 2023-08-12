class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> mp;
        for(int& i : nums){
            if(++mp[i] > len/2){
                return i;
            }
        }
        return 0;
    }
};