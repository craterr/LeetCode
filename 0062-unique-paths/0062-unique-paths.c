int uniquePaths(int m, int n) {
    if(m<0 || n<0) return 0;
    
    int dp[m][n];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=1;
        }
    }
    
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j-1]; // at (1,1) we want to go either right(i-1,j) or down(i,j-1)
        }
    }
    return dp[m-1][n-1];
}