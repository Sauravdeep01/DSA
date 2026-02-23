class Solution {
public:
    
    int minSteps(string s, string t) {
        
        vector<int> freqS(26, 0);
        vector<int> freqT(26, 0);
        
        
        for (int i = 0; i < s.length(); i++) {
            freqS[s[i] - 'a']++;
        }
        
        
        for (int i = 0; i < t.length(); i++) {
            freqT[t[i] - 'a']++;
        }
        
        
        int steps = 0;
        
        
        for (int i = 0; i < 26; i++) {
            
            if (freqT[i] > freqS[i]) {
                steps = steps + (freqT[i] - freqS[i]);
            }
        }
        
        
        return steps;
    }
};