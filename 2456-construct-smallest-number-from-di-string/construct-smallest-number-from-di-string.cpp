class Solution {
public:
    string smallestNumber(string pattern) {

        string result = "";
        
        for(int i = 0; i <= pattern.length(); i++) {

            result += char('1' + i);

            int j = i;

            while(j > 0 && pattern[j-1] == 'D') {
                swap(result[j], result[j-1]);
                j--;
            }
        }

        return result;
    }
};