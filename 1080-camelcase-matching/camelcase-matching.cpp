class Solution {
public:
    
    bool match(string query, string pattern) {
        int i = 0;
        int j = 0;

        while (i < query.length()) {
            
            if (j < pattern.length() && query[i] == pattern[j]) {
                i++;
                j++;
            }
            else {
                if (query[i] >= 'a' && query[i] <= 'z') {
                    i++;   // skip lowercase
                }
                else {
                    return false;  // extra uppercase not allowed
                }
            }
        }

        if (j == pattern.length())
            return true;
        else
            return false;
    }
    
    
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        
        vector<bool> result;
        
        for (int i = 0; i < queries.size(); i++) {
            
            bool ans = match(queries[i], pattern);
            result.push_back(ans);
        }
        
        return result;
    }
};