class Solution {
public:
    bool vowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    
    int countVowelSubstrings(string word) {
        int n = word.size();
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            int a=0,e=0,ii=0,o=0,u=0;
            
            for(int j = i; j < n; j++){
                
                if(!vowel(word[j])) break;
                
                if(word[j]=='a') a=1;
                if(word[j]=='e') e=1;
                if(word[j]=='i') ii=1;
                if(word[j]=='o') o=1;
                if(word[j]=='u') u=1;
                
                if(a && e && ii && o && u) ans++;
            }
        }
        
        return ans;
    }
};