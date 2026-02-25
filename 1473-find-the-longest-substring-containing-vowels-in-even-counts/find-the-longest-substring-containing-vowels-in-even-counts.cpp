class Solution {
public:
    int findTheLongestSubstring(string s) {

        int pos[32];
        for (int i = 0; i < 32; i++) pos[i] = -2;

        pos[0] = -1;

        int mask = 0;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'a') mask ^= (1 << 0);
            else if (s[i] == 'e') mask ^= (1 << 1);
            else if (s[i] == 'i') mask ^= (1 << 2);
            else if (s[i] == 'o') mask ^= (1 << 3);
            else if (s[i] == 'u') mask ^= (1 << 4);

            if (pos[mask] != -2) {
                int len = i - pos[mask];
                if (len > ans) ans = len;
            }
            else {
                pos[mask] = i;
            }
        }

        return ans;
    }
};