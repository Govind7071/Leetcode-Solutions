// Last updated: 27/09/2026, 21:57:47
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> answer(n+2,0);
        for (auto it:bookings){
            int l = it[0];
            int r = it[1];
            int value = it[2];

            answer[l]+=value;
            answer[r+1]-=value;

        }
        for(int i = 1;i<answer.size();i++){
            answer[i]+=answer[i-1];
        }
        answer.erase(answer.begin());
        answer.pop_back();
        return answer;
     }
};