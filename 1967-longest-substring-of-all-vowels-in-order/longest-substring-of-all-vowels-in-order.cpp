class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n = word.size();
        int ans = 0;
        int count = 1;
        int v = 1;

        for(int i = 1; i < n; i++) {
            if(word[i] >= word[i-1]) {
                count++;
                if(word[i] > word[i-1]) v++;
            }
            else {
                count = 1;
                v = 1;
            }

            if(v == 5) ans = max(ans, count);
        }

        return ans;
    }
};