class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>freq;

        for(int i=0; i<arr.size(); i++) {
            freq[arr[i]]++;
        }
        set<int> usedFreq;
        
        for(auto it = freq.begin(); it != freq.end(); it++) {
            int count = it->second;

            if(usedFreq.count(count)) {
                return false;
            }

            usedFreq.insert(count);
        }

        return true;
    }
};