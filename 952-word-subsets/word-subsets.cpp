class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {

        int maxFreq[26] = {0};

        for (int i = 0; i < words2.size(); i++) {

            int freq[26] = {0};

            for (int j = 0; j < words2[i].size(); j++) {
                freq[words2[i][j] - 'a']++;
            }

            for (int k = 0; k < 26; k++) {
                if (freq[k] > maxFreq[k]) {
                    maxFreq[k] = freq[k];
                }
            }
        }

        vector<string> result;

        for (int i = 0; i < words1.size(); i++) {

            int freq[26] = {0};

            for (int j = 0; j < words1[i].size(); j++) {
                freq[words1[i][j] - 'a']++;
            }

            bool ok = true;

            for (int k = 0; k < 26; k++) {
                if (freq[k] < maxFreq[k]) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                result.push_back(words1[i]);
            }
        }

        return result;
    }
};