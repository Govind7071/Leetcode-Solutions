// Last updated: 27/09/2026, 21:58:20
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum;
        for(int i = 0;i<nums.size();i++){
            totalSum+=nums[i];
        }
        int leftSum = 0;
        for(int i = 0;i<nums.size();i++){
            int rightSum = totalSum-leftSum-nums[i];
            if(rightSum == leftSum){
                return i;
            }
            leftSum+=nums[i];

        }
        return -1;

    }
};