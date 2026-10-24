// Last updated: 25/10/2026, 01:53:24
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxproduct = nums[0];
        // int currentmin=nums[0];
        // int currentmax=nums[0];
        // for(int i =1;i<nums.size();i++){
        //     int tempmin = currentmin;
        //     int tempmax= currentmax;

        //     currentmax=max({nums[i],tempmin*nums[i],tempmax*nums[i]});
        //     currentmin=min({nums[i],tempmin*nums[i],tempmax*nums[i]});
        //     maxproduct=max(maxproduct,currentmax);
        // }
        // return maxproduct;

        int prefix = 1,suffix=1,ans=nums[0];
        for(int i =0;i<nums.size();i++){
            if(prefix==0){
                prefix=1;
            }
            if(suffix==0){
                suffix = 1;
            }
            prefix*=nums[i];
            suffix*=nums[nums.size()-1-i];
            ans = max({prefix,suffix,ans});
        }
        return ans;
    }
};