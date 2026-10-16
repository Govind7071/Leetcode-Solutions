// Last updated: 16/10/2026, 10:15:17
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int expectedXOR = 0;
        
        // int actualXOR = 0;
        for(int i = 0;i<nums.size();i++){
            expectedXOR ^=nums[i]^i;
        }
        expectedXOR^=nums.size();
        return expectedXOR;
    }
    
};