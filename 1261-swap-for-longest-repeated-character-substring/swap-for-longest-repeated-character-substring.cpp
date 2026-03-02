class Solution {
public:
    int maxRepOpt1(string text) {

        int n = text.length();
        vector<int> freq(26, 0);

        // count frequency
        for(int i = 0; i < n; i++)
            freq[text[i] - 'a']++;

        int result = 0;

        for(int i = 0; i < n; i++) {

            int same = 0;
            int diff = 0;

            for(int j = i; j < n; j++) {

                if(text[j] == text[i])
                    same++;
                else
                    diff++;

                if(diff > 1)
                    break;

                // allow swap if extra same char exists
                if(freq[text[i]-'a'] > same)
                    result = max(result, same + 1);
                else
                    result = max(result, same);
            }
        }

        return result;
    }
};