class Solution {
public:
    string largestEven(string num) {
        int n = num.size();
        int pos = -1;

        for(int i = n - 1; i >= 0; i--) {
            if((num[i] - '0') % 2 == 0) {
                pos = i;
                break;
            }
        }

        if(pos == -1) return "";

        return num.substr(0, pos + 1);
    }
};