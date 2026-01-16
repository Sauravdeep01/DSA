class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;

        while (start < end) {

            // skip non-alphanumeric from start
            while (start < end && !isalnum(s[start])) {
                start++;
            }

            // skip non-alphanumeric from end
            while (start < end && !isalnum(s[end])) {
                end--;
            }

            // compare characters (case-insensitive)
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};
