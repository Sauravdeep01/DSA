class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        queue<int> q;
        int n = tickets.size();
        int time = 0;

        // push indices
        for(int i = 0; i < n; i++){
            q.push(i);
        }

        while(tickets[k] != 0){

            int index = q.front();
            q.pop();

            tickets[index]--;
            time++;

            if(tickets[index] > 0){
                q.push(index);
            }
        }

        return time;
    }
};
