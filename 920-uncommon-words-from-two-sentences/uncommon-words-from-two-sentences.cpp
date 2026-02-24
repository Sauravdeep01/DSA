class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> words;
        string temp = "";
        
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += s1[i];
            }
        }
        words.push_back(temp);

        temp = "";

        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += s2[i];
            }
        }
        words.push_back(temp);

        vector<string> result;

        for (int i = 0; i < words.size(); i++) {
            int count = 0;
            for (int j = 0; j < words.size(); j++) {
                if (words[i] == words[j]) {
                    count++;
                }
            }
            if (count == 1) {
                result.push_back(words[i]);
            }
        }

        return result;
    }
};