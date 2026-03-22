class Solution {
public:
    int getLucky(string s, int k) {
    string num = "";

    for (int i = 0; i < s.length(); i++) {
        int value = s[i] - 'a' + 1;
        num += to_string(value);
    }

    for (int i = 0; i < k; i++) {
        int sum = 0;

        for (int j = 0; j < num.length(); j++) {
            sum += num[j] - '0';
        }

        num = to_string(sum);
    }

    return stoi(num);
}
};