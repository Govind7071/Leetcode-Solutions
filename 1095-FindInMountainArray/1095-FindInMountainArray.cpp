// Last updated: 29/10/2026, 00:22:00
/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int low =0;
        int high =mountainArr.length()-1;
        

        while(low<high){
            int mid = low+(high-low)/2;
            int value = mountainArr.get(mid);
            if(value<mountainArr.get(mid+1)){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }

        int temp =high;
         low =0;
         high=temp;
        while(low<=high){
            int mid = low+(high-low)/2;
            int value=mountainArr.get(mid);
            if(value==target){
                return mid;
            }
            else if(value<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
         low =temp+1;
         high=mountainArr.length()-1;

        while(low<=high){
            int mid = low+(high-low)/2;
            int value=mountainArr.get(mid);

            if(value==target){
                return mid;
            }
            else if(value>target){
                low =mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;

    }
};