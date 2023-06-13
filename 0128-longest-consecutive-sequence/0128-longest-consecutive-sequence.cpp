class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Create an unordered set to store unique elements
        unordered_set<int> set;
        
        // Insert all elements from nums into the set
        for(int val : nums){
            set.insert(val);
        }
        
        // Initialize the result variable to store the longest consecutive sequence length
        int res = 0;
        
        // Iterate over each element in nums
        for(int num : nums){
            // Check if num-1 is not present in the set,
            // indicating the start of a new consecutive sequence
            if(set.find(num-1) == set.end()){
                int currnum = num;
                int seq_indx = 1;
                
                // Iterate to find the length of the consecutive sequence
                while(set.find(currnum+1) != set.end()){
                    currnum++;
                    seq_indx++;
                }
                
                // Update the result with the maximum length encountered so far
                res = max(res, seq_indx);
            }
        }
        
        // Return the length of the longest consecutive sequence
        return res;
    }
};
