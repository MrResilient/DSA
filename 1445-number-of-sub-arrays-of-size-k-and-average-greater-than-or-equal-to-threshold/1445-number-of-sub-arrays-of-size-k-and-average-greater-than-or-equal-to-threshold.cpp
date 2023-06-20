class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int len = arr.size();
        int l = 0, r = 0;
        int count = 0, sum = 0;

        while(r < len){                       

            sum += arr[r];

            if(r - l + 1 < k){
                r++;
                continue;
            }
            
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