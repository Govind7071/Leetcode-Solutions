// Last updated: 25/10/2026, 01:52:53
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum =nums[0],currentmax=nums[0],currentmin=nums[0];
        int maxsum = nums[0],minsum=nums[0];
        for(int i = 1;i<nums.size();i++){
            int previousmax = currentmax;
            int previousmin = currentmin;
            currentmax=max(previousmax+nums[i],nums[i]);
            currentmin=min(previousmin+nums[i],nums[i]);
            totalsum+=nums[i];
            maxsum = max(maxsum,currentmax);
            minsum = min(minsum,currentmin);
        }
        if(maxsum<0){
            return maxsum;
        }
        else{
            return max(maxsum,totalsum-minsum);
        }
    }
};