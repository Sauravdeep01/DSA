class Solution {
public:
    bool isValid(string s) {

        string temp = "";

        for (int i = 0; i < s.size(); i++) {

            temp += s[i];

            if (temp.size() >= 3) {

                int n = temp.size();

                if (temp[n-3] == 'a' && temp[n-2] == 'b' && temp[n-1] == 'c') {

                    temp.erase(n-3, 3);
                }
            }
        }

        return temp.size() == 0;
    }
};