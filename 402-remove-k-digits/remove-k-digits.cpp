class Solution {
public:
    string removeKdigits(string num, int k) {

        stack<char> st;
        for(int i=0; i<num.length(); i++){
            char c = num[i];

            while(!st.empty() && k>0 && st.top() > c){
                st.pop();
                k--;
            }
            st.push(c);

        }
        while(k>0 && !st.empty()){
                st.pop();
                k--;
        }

        string ans="";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }   

        reverse(ans.begin(), ans.end());

        int i=0;
        while(i<ans.length() && ans[i] == '0'){
            i++;
        }

        ans = ans.substr(i);
        if(ans == ""){
            return "0";
        }

        return ans;
        
    }
};