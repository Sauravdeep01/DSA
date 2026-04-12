class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        int ans1 = 0;
        int ans2 = 0;

        for(int i=0; i<nums1.size(); i++) {
            bool found = false;
            for(int j=0; j<nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    found = true;
                    break;
                }
            }
             if(found) ans1++;
        }
        
        for(int i=0; i<nums2.size(); i++) {
            bool found = false;
            for(int j=0; j<nums1.size(); j++) {
                if(nums2[i] == nums1[j]) {
                    found = true;
                    break;
                }
            }
            if (found) ans2++;
        }

        return {ans1,ans2};
    }
};