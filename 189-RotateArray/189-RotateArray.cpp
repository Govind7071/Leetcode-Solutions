// Last updated: 16/10/2026, 10:15:27
class Solution {
public:

    
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int left =nums.size()-k;
        int right=nums.size()-1;
        while(left<right){
            int temp = nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
        left=0;
        right=nums.size()-k-1;

        while(left<right){
            int temp = nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
        left=0;
        right=nums.size()-1;
        while(left<right){
            int temp = nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
    }
};