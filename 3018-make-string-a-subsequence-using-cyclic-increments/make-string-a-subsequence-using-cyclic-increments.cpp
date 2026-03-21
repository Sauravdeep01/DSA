class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int i = 0, j = 0;

        while(i < s.size() && j < t.size()) {
            char nextChar = (s[i] == 'z') ? 'a' : s[i] + 1;

            if(s[i] == t[j] || nextChar == t[j]) {
                j++;
            }

            i++;
        }

        return j == t.size();
    }
};