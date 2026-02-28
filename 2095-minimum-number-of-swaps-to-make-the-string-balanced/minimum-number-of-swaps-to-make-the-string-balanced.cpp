class Solution {
public:
    int minSwaps(string s) {
        
        int open = 0;
        int imbalance = 0;
        
        for(int i = 0; i < s.length(); i++){
            
            if(s[i] == '['){
                open++;
            }
            else{
                if(open > 0){
                    open--;
                }
                else{
                    imbalance++;
                }
            }
        }
        
        return (imbalance + 1) / 2;
    }
};