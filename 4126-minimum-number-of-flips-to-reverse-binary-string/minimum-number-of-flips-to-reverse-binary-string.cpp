class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        while(n > 0) {
            s = char('0' + (n % 2)) + s;
            n /= 2;
        }

        int flips = 0;
        int left = 0, right = s.size() - 1;

        while(left < right) {
            if(s[left] != s[right]) {
                flips += 2; 
            }
            left++;
            right--;
        }

        return flips;
    }
};