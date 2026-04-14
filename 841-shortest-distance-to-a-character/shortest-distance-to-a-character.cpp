class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n);

        int last = -100000;

        for(int i = 0; i < n; i++) {
            if(s[i] == c) {
                last = i;
            }
            ans[i] = i - last;
        }

        last = 100000;

        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == c) {
                last = i;
            }
            int dist = last - i;
            if(dist < ans[i]) {
                ans[i] = dist;
            }
        }

        return ans;
    }
};