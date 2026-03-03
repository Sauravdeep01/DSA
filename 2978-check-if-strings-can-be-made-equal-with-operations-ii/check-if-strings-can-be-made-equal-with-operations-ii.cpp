class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.size();
        
        vector<int> e1(26, 0), o1(26, 0);
        vector<int> e2(26, 0), o2(26, 0);

        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                e1[s1[i] - 'a']++;
                e2[s2[i] - 'a']++;
            } else {
                o1[s1[i] - 'a']++;
                o2[s2[i] - 'a']++;
            }
        }

        for(int i = 0; i < 26; i++) {
            if(e1[i] != e2[i]) return false;
        }

        for(int i = 0; i < 26; i++) {
            if(o1[i] != o2[i]) return false;
        }

        return true;
    }
};