class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();

        int lr = 0, hr = row - 1;
        // row binary search to find specific row containing elements
        while(lr <= hr){
            int roww = (lr + hr)/2;
            if(target > matrix[roww][col - 1]){
                lr = roww + 1;
            } else if (target < matrix[roww][0]){
                hr = roww - 1;
            } else {
                break;
            }
        }

        if(!(lr<=hr)){
            return false;
        }

        int r = (lr + hr)/2;
        // now i have got the row having required element
        int lc = 0, hc = col - 1;
        while(lc <= hc){
            int mid = (lc + hc)/2;
            if(target > matrix[r][mid]){
                lc = mid + 1;
            } else if (target < matrix[r][mid]){
                hc = mid - 1;
            } else {
                return true;
            }
        }

        return false;
    }
};