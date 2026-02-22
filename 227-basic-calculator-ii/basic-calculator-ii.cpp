class Solution {
public:
    int calculate(string s) {
        
        int sum = 0;
        int last = 0;
        int num = 0;
        char op = '+';
        
        for(int i = 0; i < s.length(); i++){
            
            if(isdigit(s[i])){
                num = num * 10 + (s[i] - '0');
            }
            
            if((!isdigit(s[i]) && s[i] != ' ') || i == s.length()-1){
                
                if(op == '+'){
                    sum += last;
                    last = num;
                }
                else if(op == '-'){
                    sum += last;
                    last = -num;
                }
                else if(op == '*'){
                    last = last * num;
                }
                else if(op == '/'){
                    last = last / num;
                }
                
                op = s[i];
                num = 0;
            }
        }
        
        sum += last;
        return sum;
    }
};