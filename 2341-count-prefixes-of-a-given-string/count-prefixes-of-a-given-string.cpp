class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;

        for(int i = 0; i < words.size(); i++) {
            string word = words[i];

            if(word.length() <= s.length()) {
                bool match = true;

                for(int j = 0; j < word.length(); j++) {
                    if(word[j] != s[j]) {
                        match = false;
                        break;
                    }
                }

                if(match) {
                    count++;
                }
            }
        }

        return count;
    }
};