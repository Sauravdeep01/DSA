class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;

        vector<vector<int>> freq(n, vector<int>(26, 0));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < words[i].size(); j++) {
                freq[i][words[i][j] - 'a'] = 1;
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                bool similar = true;

                for(int k = 0; k < 26; k++) {
                    if(freq[i][k] != freq[j][k]) {
                        similar = false;
                        break;
                    }
                }

                if(similar) {
                    count++;
                }
            }
        }

        return count;
    }
};