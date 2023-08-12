class Solution {
public:
    int maxNumberOfBalloons(string text) {
       map<char, int> txtcount;
       map<char, int> word;
       for(char c : string("balloon") ){
           word[c]++;
       }
       for(char c : text){
           txtcount[c]++;
       }

       int ans = text.length();
       for(const auto &[key, value] : word){
           ans = min(ans, txtcount[key]/value);
       }
       return ans;
    }
};