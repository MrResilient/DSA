class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < len; ++i){
            mp[nums[i]]++;
        }
        int k = 0; 
        for(int i = 0; i < len; ++i){
            if(mp[0]>0){
                nums[k++] = 0;
                mp[0]--;
            }
        }
        for(int i = 0; i < len; ++i){
            if(mp[1]>0){
                nums[k++] = 1;
                mp[1]--;
            }
        }
        for(int i = 0; i < len; ++i){
            if(mp[2]>0){
                nums[k++] = 2;
                mp[2]--;
            }
        }

    }
};