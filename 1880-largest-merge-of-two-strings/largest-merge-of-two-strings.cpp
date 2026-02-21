class Solution {
public:
    string largestMerge(string word1, string word2) {
        
        string result = "";
        
        int i = 0, j = 0;
        
        while(i < word1.size() && j < word2.size()){
            
            if(word1.substr(i) > word2.substr(j)){
                result += word1[i];
                i++;
            }
            else{
                result += word2[j];
                j++;
            }
        }
        
        result += word1.substr(i);
        result += word2.substr(j);
        
        return result;
    }
};