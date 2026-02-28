class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int count = 0;
        
        for(int i = 0; i < words.size(); i++){
            bool consistent = true;
        
            for(int j = 0; j < words[i].length(); j++){        
                bool found = false;

                for(int k = 0; k < allowed.length(); k++){
                    if(words[i][j] == allowed[k]){
                        found = true;
                        break;
                    }
                }
                
                if(found == false){
                    consistent = false;
                    break;
                }
            }
            
            if(consistent == true){
                count++;
            }
        }
        
        return count;
    }
};