class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int len = arr.size();
        int l = 0, r = 0;
        int count = 0, sum = 0;
        // int sz = 0;

        while(r < len){                       

            sum += arr[r];

            if(r - l + 1 < k){
                // sum = 0;
                // sz = 0;
                // l++;
                r++;
                continue;
            }
            // else{
            //     sum += arr[r];
            //     sz++;
            //     r++;
            // }
            
            if((sum/k) >= threshold){
                count++;
            }

           sum -= arr[l];
           l++;
           r++;                        
        }
        return count;
    }
};