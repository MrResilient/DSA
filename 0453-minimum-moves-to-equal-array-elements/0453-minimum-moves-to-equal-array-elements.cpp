class Solution {
public:
    int minMoves(vector<int>& nums) {

    int minNum = *std::min_element(nums.begin(), nums.end());
    int totalMoves = 0;
    
    for (int num : nums) {
        totalMoves += num - minNum;
    }
    
    return totalMoves;


    }
};