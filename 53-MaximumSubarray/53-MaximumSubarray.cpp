// Last updated: 25/10/2026, 01:53:38
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int  currentsum = nums[0];
        int maxsum =nums[0];

        for(int i =1;i<nums.size();i++){
            int previoussum = currentsum;
            currentsum =max(previoussum+nums[i],nums[i]);
            maxsum = max(maxsum,currentsum);
        }
        return maxsum;
    }
};