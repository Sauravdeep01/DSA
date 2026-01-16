class Solution {
public:
    int longestPalindrome(string s) {
        int count = 0;
        bool odd = 0;

        vector<int>lower(26,0);
        vector<int>Upper(26,0);

        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                lower[s[i]-'a']++;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z'){
                Upper[s[i] - 'A']++;
            }
        }

        for(int i=0; i<26; i++){
            if(lower[i] % 2 == 0){
                count += lower[i];
            }
            else{
                count += lower[i]-1;
                odd = 1;
            }
            if(Upper[i] % 2 == 0){
                count += Upper[i];
            }
            else{
                count += Upper[i]-1;
                odd = 1;
            }
        }
        return count+odd;
        
    }
        
};