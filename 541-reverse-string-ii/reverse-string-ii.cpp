class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();

        for(int i = 0; i < n; i += 2 * k) {
            int l = i;
            int r = min(i + k - 1, n - 1);

            while(l < r) {
                char t = s[l];
                s[l] = s[r];
                s[r] = t;
                l++;
                r--;
            }
        }

        return s;
    }
};