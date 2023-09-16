class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int lenG = g.size();
        int lenS = s.size();
        int gp = 0, sp = 0;
        int c = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while (gp < lenG && sp < lenS) {
            if (g[gp] <= s[sp]) {
                c++;
                gp++;
            }
            sp++;
        }

        return c;
    }
};
