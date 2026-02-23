class Solution {
public:

    bool check(string s, string word){
        
        int i = 0, j = 0;
        
        while(i < s.length() && j < word.length()){
            
            if(s[i] != word[j]){
                return false;
            }
            
            int count1 = 0;
            char ch = s[i];
            
            while(i < s.length() && s[i] == ch){
                count1++;
                i++;
            }
            
            int count2 = 0;
            
            while(j < word.length() && word[j] == ch){
                count2++;
                j++;
            }
            
            if(count1 < count2){
                return false;
            }
            
            if(count1 != count2 && count1 < 3){
                return false;
            }
        }
        
        return i == s.length() && j == word.length();
    }
    
    
    int expressiveWords(string s, vector<string>& words) {
        
        int ans = 0;
        
        for(string word : words){
            
            if(check(s, word)){
                ans++;
            }
        }
        
        return ans;
    }
};