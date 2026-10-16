// Last updated: 16/10/2026, 10:15:02
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> answer(r,vector<int>(c,0));
        if (m*n != r*c){
            return mat;
        }
        int  k =0;
        for (int i = 0;i<m;i++){
            for (int j = 0;j<n;j++){
                answer[k/c][k%c]=mat[i][j];
                k++;
            }
        }
        return answer;
    }
};