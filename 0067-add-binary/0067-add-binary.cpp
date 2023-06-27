class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry = 0;
        int i = a.size() - 1, j = b.size() - 1;

        while(i >=0 || j >= 0){
            int sum = 0;

            if(i >= 0){
            sum += a[i--] - '0';
            }

            if(j >= 0){
                sum += b[j--] - '0';
            }
            
            sum += carry;
            
            int val = (sum & 1) + '0';  //making our integer value as bit
            // converting to ASCII 
            ans.push_back(val);  
            carry = sum >> 1; // choping values from right
        }
        if(carry){
            ans.push_back(carry + '0');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};