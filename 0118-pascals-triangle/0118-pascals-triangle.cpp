class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        for(int i = 0; i < numRows; ++i){
            vector<int> v1(i+1, 1);
            for(int j = 1; j < i; ++j){
                v1[j] = vec[i-1][j] + vec[i-1][j-1];
            }
            vec.push_back(v1);
        }
        return vec;
    }
};