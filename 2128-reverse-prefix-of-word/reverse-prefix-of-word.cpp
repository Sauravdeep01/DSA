class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        stack<char> st;
        int idx=-1;;

        for(int i=0; i<word.size(); i++){
             st.push(word[i]);
            if(word[i] == ch){
               
                idx=i;
                break;
            }
        }
        if(idx==-1) return word;
        int i=0;
        while(!st.empty())
        {
          word[i++]=st.top();
          st.pop();
        }
        return word;
        
    }
};