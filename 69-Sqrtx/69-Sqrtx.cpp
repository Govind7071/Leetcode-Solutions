// Last updated: 30/10/2026, 20:42:15
class Solution {
public:
    int mySqrt(int x) {
        
        if(x<2){
            return x;
        }
        int low = 0;
        int high=x/2;

        while(low<=high){
            long long mid = low+(high-low)/2;

            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid<x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low-1;

    }
};