class Solution {
public:
    int characterReplacement(string s, int k) {
        int len = s.size();
        int ans = INT_MIN;
        int l , r = 0;
        vector<int> hash(26);
        int max_freq = 0;

        while(r < len){
            hash[s[r] - 'A']++;

            max_freq = max(max_freq, hash[s[r] - 'A']);

            if( r - l + 1 - max_freq > k){
                hash[s[l++] - 'A']--;
            }

            ans = max(ans, r - l + 1);
            r++;
        }
        
        return ans;
    }
};