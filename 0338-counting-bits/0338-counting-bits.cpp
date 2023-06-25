class Solution {
public:
//     int intToBinary(int number) {
//     if (number == 0) {
//         return 0;
//     }

//     int binary = 0;
//     int base = 1;

//     while (number > 0) {
//         binary += (number & 1) * base;
//         number >>= 1;
//         base *= 10;
//     }

//     return binary;
//    }


    int count1(int num){
        int val = 0;
        int root_val = num;

        while(root_val){
            ++val;            
            root_val = root_val & (root_val - 1) ;
        }
        return val;
    }


    vector<int> countBits(int n) {
        vector<int> ans(n + 1);


        for(int i = 0; i < n + 1; ++i){
            // ans.push_back(count1(i));
            ans[i] = count1(i);
        }
        return ans;
    }
};