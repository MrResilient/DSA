class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;

        int len1 = nums1.size();
        int len2 = nums2.size();

        for(int i = 0; i < len1; ++i){
            if(s1.find(nums1[i]) == s1.end()){
                s1.insert(nums1[i]);
            }
        }

        for(int i = 0; i < len2; ++i){
            if(s2.find(nums2[i]) == s2.end()){
                s2.insert(nums2[i]);
            }
        }

        vector<vector<int>> ans;

        vector<int> v0, v1;

        
           for (int value : s1) {
        if (s2.find(value) == s2.end()) {
            v0.push_back(value);
        }
    }
        

        ans.push_back(v0);

        
            for (int value : s2) {
        if (s1.find(value) == s1.end()) {
            v1.push_back(value);
        }
    }
        

        ans.push_back(v1);

        return ans;
    }
};