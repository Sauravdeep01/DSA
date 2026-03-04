class Solution {
public:

    string merge(string a, string b){
        if(a.find(b) != string::npos) return a;

        for(int i = 0; i < a.size(); i++){
            if(a.substr(i) == b.substr(0, a.size()-i)){
                return a + b.substr(a.size()-i);
            }
        }

        return a + b;
    }

    string minimumString(string a, string b, string c) {

        vector<string> v;

        v.push_back(merge(merge(a,b),c));
        v.push_back(merge(merge(a,c),b));
        v.push_back(merge(merge(b,a),c));
        v.push_back(merge(merge(b,c),a));
        v.push_back(merge(merge(c,a),b));
        v.push_back(merge(merge(c,b),a));

        string ans = v[0];

        for(int i = 1; i < v.size(); i++){
            if(v[i].size() < ans.size() || 
               (v[i].size() == ans.size() && v[i] < ans)){
                ans = v[i];
            }
        }

        return ans;
    }
};