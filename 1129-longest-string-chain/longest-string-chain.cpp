class Solution {
public:

    // function to check predecessor
    bool isPredecessor(string a, string b) {
        
        if (b.length() != a.length() + 1)
            return false;

        int i = 0;
        int j = 0;
        int diff = 0;

        while (i < a.length() && j < b.length()) {

            if (a[i] == b[j]) {
                i++;
                j++;
            }
            else {
                diff++;
                j++;
                if (diff > 1)
                    return false;
            }
        }

        return true;
    }


    int longestStrChain(vector<string>& words) {

        int n = words.size();

        // sort by length
        sort(words.begin(), words.end(), [](string &a, string &b){
            return a.length() < b.length();
        });

        vector<int> dp(n, 1);

        int maxLen = 1;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < i; j++) {

                if (isPredecessor(words[j], words[i])) {

                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                    }

                }

            }

            if (dp[i] > maxLen)
                maxLen = dp[i];
        }

        return maxLen;
    }
};