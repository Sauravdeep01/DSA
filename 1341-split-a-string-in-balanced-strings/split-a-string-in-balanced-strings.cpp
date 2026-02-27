class Solution {
public:
    
    int balancedStringSplit(string s) {
        
        int countL = 0;
        int countR = 0;
        int answer = 0;
        
        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] == 'L')
                countL++;
            else
                countR++;
            
            
            if (countL == countR) {
                answer++;
            }
        }
        
        return answer;
    }
};