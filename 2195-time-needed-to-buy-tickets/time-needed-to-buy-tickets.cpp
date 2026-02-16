class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        queue<int> q;
        int n = tickets.size();
        int time = 0;

        for(int i = 0; i < n; i++){
            q.push(i);
        }

        while(tickets[k] != 0){

            tickets[q.front()]--;
            time++;

            if(tickets[q.front()] == 0){
                q.pop();
            }
            else{
                q.push(q.front());
                q.pop();
            }
        }

        return time;
    }
};
