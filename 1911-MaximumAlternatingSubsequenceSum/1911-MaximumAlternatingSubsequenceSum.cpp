// Last updated: 25/10/2026, 01:52:29
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        

        long long plus = nums[0];
        long long minus = 0;

        for(int i =1;i<nums.size();i++){
            long long prevplus = plus;
            long long prevminus = minus;

            plus = max(prevplus,prevminus+nums[i]);
            minus = max(prevminus,prevplus-nums[i]);
        }
        return max(plus,minus);
    }
};