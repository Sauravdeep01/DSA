class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> missing;
        
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++){
            int current = nums[i];
            int next = nums[i+1];

            for(int num = current + 1; num<next; num++){
                missing.push_back(num);
            }
        }
        return missing;
    }
};