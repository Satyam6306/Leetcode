class Solution {
public:
int strp(vector<int>&dp,int n ) {
    if(n==1 || n==0) return 1;
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int f=strp(dp,n-2);
    int s=strp(dp,n-1);

    return dp[n]=f+s;
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return strp(dp,n);
    }
};