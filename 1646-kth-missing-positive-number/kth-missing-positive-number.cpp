class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            int missing = arr[i] - (i + 1);

            if (missing >= k) {
                return k + i;
            }
        }

        // If k-th missing is after the last element
        int missingTillEnd = arr[n - 1] - n;
        return arr[n - 1] + (k - missingTillEnd);
    }
};
