class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        
        for(int i = 0; i < n; i++) {
            int start = i;
            
            while(i < n && s[i] != ' ') {
                i++;
            }
            
            int end = i - 1;
            
            while(start < end) {
                char t = s[start];
                s[start] = s[end];
                s[end] = t;
                start++;
                end--;
            }
        }
        
        return s;
    }
};