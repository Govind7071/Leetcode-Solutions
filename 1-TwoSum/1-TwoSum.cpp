// Last updated: 29/11/2025, 19:22:41
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                   return {i,j}; 
                }
            }

        
        }
      return {};  
    }
    
};