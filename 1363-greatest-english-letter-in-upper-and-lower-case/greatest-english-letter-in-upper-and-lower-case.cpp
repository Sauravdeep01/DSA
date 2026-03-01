class Solution {
public:
    string greatestLetter(string s) {

        for(char ch = 'Z'; ch >= 'A'; ch--) {

            bool lower = false;
            bool upper = false;

            for(int i = 0; i < s.length(); i++) {

                if(s[i] == ch)
                    upper = true;

                if(s[i] == ch + 32)
                    lower = true;
            }

            if(lower && upper) {
                string result = "";
                result += ch;
                return result;
            }
        }

        return "";
    }
};