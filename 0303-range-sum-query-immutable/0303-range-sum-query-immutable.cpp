class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        
        int count = 0;
        for(int i = 0; i < nums.size(); ++i){
            count += nums[i];
            prefix.push_back(count);
        }
    }
    
    int sumRange(int left, int right) {
        int ans = prefix[right];
        if(left - 1 >= 0){
            ans -= prefix[left - 1];
        }
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */