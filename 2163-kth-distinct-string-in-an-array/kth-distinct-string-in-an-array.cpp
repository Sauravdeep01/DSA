class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        
        for(int i = 0; i < n; i++){
            int count = 0;
            
            for(int j = 0; j < n; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            
            if(count == 1){
                k--;
                if(k == 0)
                    return arr[i];
            }
        }
        
        return "";
    }
};