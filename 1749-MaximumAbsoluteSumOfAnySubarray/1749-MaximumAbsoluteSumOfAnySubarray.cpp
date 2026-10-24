// Last updated: 25/10/2026, 01:52:31
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum =nums[0], minsum =nums[0];
        int currentmax = nums[0];
        int currentmin=nums[0];
        for(int i =1;i<nums.size();i++){
            int previousmax = currentmax;
            int previousmin = currentmin;

            currentmax = max(previousmax+nums[i],nums[i]);
            maxsum = max(maxsum,currentmax);
            currentmin = min(previousmin+nums[i],nums[i]);
            minsum = min(minsum,currentmin);
        }
        return max(maxsum,abs(minsum));
    }
};