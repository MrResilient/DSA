class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int ans = 1;
        long int sum = 0;
        int l = 0;

        for (int r = 1; r < len; r++) {
            sum += (long)(nums[r] - nums[r - 1]) * (r - l);

            while (sum > k) {
                sum -= nums[r] - nums[l];
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
