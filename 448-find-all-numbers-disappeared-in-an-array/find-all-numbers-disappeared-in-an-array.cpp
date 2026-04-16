class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        sort(nums.begin(), nums.end());

        int expected = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == expected) {
                expected++;
            } else if (nums[i] > expected) {
                result.push_back(expected);
                expected++;
                i--; 
            }
        }

        while (expected <= n) {
            result.push_back(expected);
            expected++;
        }

        return result;
    }
};
