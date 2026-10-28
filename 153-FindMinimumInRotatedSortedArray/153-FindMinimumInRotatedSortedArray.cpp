// Last updated: 29/10/2026, 00:22:54
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low =0;
        int high = nums.size()-1;
 
        while(low<high){

             int mid = low+(high-low)/2;

            if(nums[mid]<nums[high]){
                high=mid;
            }
            else{
                low = mid+1;
            }
        }
        return nums[low];
    }
};