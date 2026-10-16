// Last updated: 16/10/2026, 10:14:35
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0;i<=arr.size()-2;i++){
            if(arr[i]==0){
                for(int j =arr.size()-2;j>i;j--){
                    arr[j+1]=arr[j];
                }
                arr[i+1]=0;
                i++;
            }
        }
    }
};