class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        vector<int> countS(26,0);
        vector<int> countP(26,0);

        // store frequency of p
        for(int i=0; i<p.length(); i++){
            countP[p[i]-'a']++;
        }

        int window = p.length();

        for(int i=0; i<s.length(); i++){

            // add current character
            countS[s[i]-'a']++;

            // remove old character
            if(i >= window){
                countS[s[i-window]-'a']--;
            }

            // compare
            if(countS == countP){
                ans.push_back(i-window+1);
            }

        }

        return ans;
    }
};