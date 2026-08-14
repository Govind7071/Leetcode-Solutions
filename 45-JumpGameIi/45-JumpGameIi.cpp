// Last updated: 14/08/2026, 13:16:33
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int>status(n,-1);
        queue<int>Q;
        if (n==1)
        return 0;
        Q.push(0);
        status[0] = 0;
        while(!Q.empty()){
            int x = Q.front();
            Q.pop();
            int m = nums[x];
            for (int i = 1;i<=m;i++){
                int y = x+i;
                if(status[y]== -1){
                    Q.push(y);
                    status[y]= status[x]+1;
                    if(y==n-1)
                    return status[n-1];
                }
            }
        }
    
    return -1;
    }
};