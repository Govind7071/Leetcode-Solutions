// Last updated: 29/10/2026, 00:22:19
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low =0;
        int high = arr.size()-1;

        while(low<high){
            int mid = low+(high-low)/2;

            if(arr[mid]<arr[mid+1]){
                low =mid+1;
            }
            else{
                high=mid;
            }
        }
        return high;
    }
};