// Last updated: 27/09/2026, 21:57:32
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int>runningSum(nums.size());
        // runningSum[0]=nums[0];
        int prefixsum = 0;
        // for (int i = 1;i<nums.size();i++){
        //     // runningSum[i]=runningSum[i-1]+nums[i];
        // }
        for(int i = 0;i<nums.size();i++){
            prefixsum+=nums[i];
            runningSum[i] =prefixsum;
        }
        return runningSum;
    }
};