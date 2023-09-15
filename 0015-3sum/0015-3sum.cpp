class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue; // Skip duplicates
            }
            int a = nums[i];
            int target = -a;
            int start = i + 1, end = n - 1;

            while (start < end) {
                int currsum = nums[start] + nums[end];
                if (currsum < target) {
                    start++;
                } else if (currsum > target) {
                    end--;
                } else {
                    v.push_back({a, nums[start], nums[end]});
                    start++;
                    end--;

                    // Skip duplicates
                    while (start < end && nums[start] == nums[start - 1]) {
                        start++;
                    }
                    while (start < end && nums[end] == nums[end + 1]) {
                        end--;
                    }
                }
            }
        }

        return v;
    }
};