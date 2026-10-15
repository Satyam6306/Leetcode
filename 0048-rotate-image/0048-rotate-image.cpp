class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int r=mat.size();
        int c =mat[0].size();
        for(int i=0;i<r ;i++){
            for(int j=i+1;j<c;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int k=0;k<r;k++){
            reverse(mat[k].begin(),mat[k].end());
        }
    }
};