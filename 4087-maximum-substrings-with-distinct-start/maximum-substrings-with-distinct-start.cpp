class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();
        int f[26] = {0};
        int c = 0;

        for(int i = 0; i < n; i++){
            int id = s[i] - 'a';
            if(f[id] == 0){
                c++;
                f[id] = 1;
            }
        }

        return c;
    }
};