class Solution {
public:
typedef unsigned long long ull;
    int reverse(int x) {
      int r = 0;
      while(x){
        if(r>INT_MAX/10 || r<INT_MIN/10){
          return 0;
        }
          r = r*10 + x%10;
          x /= 10;
      }     

      return int(r);
    }
};