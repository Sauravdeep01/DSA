class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int a = -1, b = -1, c = -1;
        int ans = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'a') a = i;
            if(s[i] == 'b') b = i;
            if(s[i] == 'c') c = i;

            int m = min(a, min(b, c));
            if(m != -1) ans += m + 1;
        }

        return ans;
    }
};