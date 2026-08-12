class Solution {
public:
int dp[101][101];
int way(int sr,int sc,int m ,int n ) {
    if(sc>n || sr>m) return 0;
    if(sc==n-1 && sr==m-1) return 1;
    if(dp[sr][sc]!=-1){
        return dp[sr][sc];
    }
    int down=way(sr+1,sc,m,n);
    int right=way(sr,sc+1,m,n);

    return dp[sr][sc]=down+right;

}
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
      return  way(0,0,m,n);
    }
};