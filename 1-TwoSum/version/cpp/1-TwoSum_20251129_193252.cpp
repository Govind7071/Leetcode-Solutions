// Last updated: 29/11/2025, 19:32:52
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        for(int i=0;i<nums.size();i++){
5            for(int j=i+1;j<nums.size();j++){
6                if((nums[i]+nums[j])==target){
7                   return {i,j}; 
8                }
9            }
10
11        
12        }
13      return {};  
14    }
15    
16};