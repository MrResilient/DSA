class Solution {
public:
    bool wordPattern(string pattern, string s) {
          unordered_map<char, string> charToStrMap;
        unordered_map<string, char> strToCharMap;
        vector<string> words;

        // Tokenize the string 's' into words
        istringstream iss(s);
        string word;
        while (iss >> word) {
            words.push_back(word);
        }

        if (pattern.length() != words.size()) {
            return false;
        }

        int len = pattern.length();
        for (int i = 0; i < len; ++i) {
            char c = pattern[i];
            string word = words[i];

            if (charToStrMap.find(c) == charToStrMap.end() && strToCharMap.find(word) == strToCharMap.end()) {
                charToStrMap[c] = word;
                strToCharMap[word] = c;
            } else if (charToStrMap[c] != word || strToCharMap[word] != c) {
                return false;
            }
        }

        return true;
    }
};