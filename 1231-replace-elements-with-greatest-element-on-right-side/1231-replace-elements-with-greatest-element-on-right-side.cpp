class Solution {
private:
int findMaxInRange(const std::vector<int>& vec, int startIndex) {
    if (startIndex >= vec.size() || startIndex < 0) {
        // Invalid start index, return a default value or throw an exception
        return -1; // For demonstration purposes, returning -1 for an invalid index
    }

    auto it = std::max_element(vec.begin() + startIndex, vec.end());
    return *it;
}

public:
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        vector<int> vec;
        for(int i = 0; i < len; ++i){
            vec.push_back(arr[i]);
        }
        for(int i = 0; i < len - 1; ++i){
            vec[i] = findMaxInRange(vec, i+1);
        }
        vec[len - 1] = -1;
        return vec;
    }
};