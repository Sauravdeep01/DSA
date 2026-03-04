class Solution {
public:
    
    bool vowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> pre(n+1,0);
        
        for(int i = 0; i < n; i++){
            if(vowel(words[i][0]) && vowel(words[i][words[i].size()-1])){
                pre[i+1] = pre[i] + 1;
            } else {
                pre[i+1] = pre[i];
            }
        }
        
        vector<int> ans;
        
        for(int i = 0; i < queries.size(); i++){
            int l = queries[i][0];
            int r = queries[i][1];
            
            ans.push_back(pre[r+1] - pre[l]);
        }
        
        return ans;
    }
};