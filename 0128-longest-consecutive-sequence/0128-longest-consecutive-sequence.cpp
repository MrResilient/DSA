class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Create an unordered map to store whether each number is visited or not
        unordered_map<int, bool> map;
        
        // Iterate over the nums vector and mark each number as visited in the map
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]] = true;
        }
        
        // Iterate over the nums vector again
        for(int i = 0; i < nums.size(); i++){
            // Check if the previous consecutive number exists in the map
            if(map.count(nums[i] - 1) > 0){
                // If the previous number exists, mark the current number as not the start of a consecutive sequence
                map[nums[i]] = false;
            }
        }
        
        // Initialize the maximum length variable
        int maxlen = 0;
        
        // Iterate over the nums vector once more
        for(int i = 0; i < nums.size(); i++){
            // Check if the current number is the start of a consecutive sequence
            if(map[nums[i]] == true){
                int j = 0;
                int count = 0;
                
                // Iterate to find the length of the consecutive sequence
                while(map.count(nums[i] + j) > 0){
                    j++;
                    count++;
                }
                
                // Update the maximum length if the current count is greater
                if(count > maxlen){
                    maxlen = count;
                }
            }
        }
        
        // Return the maximum length of the consecutive sequence
        return maxlen;
    }
};
