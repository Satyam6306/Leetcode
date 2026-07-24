class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m =mat[0].size();
        int i=0;
       
        while(i<n) {
int l=0, hi=m-1;
while(l<=hi){
            int mid =l+(hi-l)/2;
           
            if(mat[i][mid]==target) return true;
            else if ( mat[i][mid]>target){
                hi=mid-1;
            }
            else
            l=mid+1;
            }
            i++;
        }
        return false;
    }
};