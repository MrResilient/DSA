class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        /*
        This(str1+str2==str2+str1) is a requirement for the strings       to have a gcd. If one of them is NOT a common part,
 then gcd is "".It means we will return empty string
Proof:-str1 = mGCD, str2 = nGCD, str1 + str2 = (m + n)GCD = str2 + str1

single line solution
return (str1 + str2 == str2 + str1) ? str1.substr(0, gcd(size(str1), size(str2))) : "";
        */

        if(str1 + str2 == str2 + str1){
            return str1.substr(0, gcd(size(str1), size(str2)));            
        }else{
            return "";
        }

    }
};