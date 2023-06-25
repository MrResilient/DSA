class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int len = mat.size();

        for( int i = 0; i < len; i++){
            ans += mat[i][i];
            ans += mat[i][len - i - 1];
        }
        if(len % 2){
            return ans - mat[len / 2][len / 2];
        }

        return ans;

    }
};