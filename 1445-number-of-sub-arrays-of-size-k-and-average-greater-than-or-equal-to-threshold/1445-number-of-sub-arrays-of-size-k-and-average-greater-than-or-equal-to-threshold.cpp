class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int len = arr.size();
        int l = 0, r = k;
        int count = 0, sum = 0;

        for(int i=0; i<k; ++i){
            sum += arr[i];
        }

        if(sum/k >= threshold){
            count++;
        }

        while(r < len){   
            // here doing (l++, r++) and (++l, ++r) created noticable difference, BE CAREEFUL ABOUT IT.

            sum -= arr[l++];
            sum += arr[r++];
            
            if(sum/k >= threshold){
                count++;
            }
        }

        return count;
    }
};