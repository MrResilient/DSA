class Solution {
    private:
        void merge(vector<int>& arr, int low, int mid, int high){
            vector<int> tmp;
            int left = low;
            int right = mid+1;
            while(left<=mid && right<=high){
                if(arr[left] <= arr[right]){
                    tmp.push_back(arr[left]);
                    left++;
                } else {
                    tmp.push_back(arr[right]);
                    right++;
                }
            }

            while(left<=mid){
                tmp.push_back(arr[left]);
                left++;
            }

            while(right<=high){
                tmp.push_back(arr[right]);
                right++;
            }

            for(int i = low; i <= high; ++i){
                arr[i] = tmp[i-low];
            }
        }

        void mergesort(vector<int>& vec, int low, int high){
            if(low == high){
                return ;
            }
            int mid = (low + high)/2;
            mergesort(vec, low, mid);
            mergesort(vec, mid+1, high);
            merge(vec, low, mid, high);
        }
    public:
    vector<int> sortArray(vector<int>& nums) {
        int len = nums.size();
        mergesort(nums, 0, len - 1);
        return nums;
    }
};