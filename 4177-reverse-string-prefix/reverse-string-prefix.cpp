class Solution {
public:
    string reversePrefix(string s, int k) {
        int l = 0, r = k - 1;

        while(l < r) {
            char t = s[l];
            s[l] = s[r];
            s[r] = t;
            l++;
            r--;
        }

        return s;
    }
};