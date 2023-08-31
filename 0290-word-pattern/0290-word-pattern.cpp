class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char, string> cts;
        unordered_map<string, char> stc;

        vector<string> extract;

        istringstream iss(s);
        string wrd;
        while(iss >> wrd){
            extract.push_back(wrd);
        }
        if(pattern.size() != extract.size()){
            return false;
        }

        int len = pattern.length();

        for(int i = 0; i < len; ++i){
            char c = pattern[i];
            string w = extract[i];

            if(cts.find(c) == cts.end() && stc.find(w) == stc.end()){
                cts[c] = w;
                stc[w] = c;
            } else if (cts[c] != w || stc[w] != c){
                return false;
            }
        }
        return true;
    }
};




// unordered_map<char, string> charToStrMap;
//         unordered_map<string, char> strToCharMap;
//         vector<string> words;

//         // Tokenize the string 's' into words
//         istringstream iss(s);
//         string word;
//         while (iss >> word) {
//             words.push_back(word);
//         }

//         if (pattern.length() != words.size()) {
//             return false;
//         }

//         int len = pattern.length();
//         for (int i = 0; i < len; ++i) {
//             char c = pattern[i];
//             string word = words[i];

//             if (charToStrMap.find(c) == charToStrMap.end() && strToCharMap.find(word) == strToCharMap.end()) {
//                 charToStrMap[c] = word;
//                 strToCharMap[word] = c;
//             } else if (charToStrMap[c] != word || strToCharMap[word] != c) {
//                 return false;
//             }
//         }

//         return true;