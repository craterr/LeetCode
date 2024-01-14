int minFallingPathSum(int** matrix, int matrixSize, int* matrixColSize) 
{

    int n =matrixSize;
    int m=*matrixColSize;
    
    int dp[n][m];
    
    for (int i = 0; i < m; i++) {
        dp[0][i] = matrix[0][i];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int left = (j>0) ? dp[i-1][j-1] : INT_MAX;
            int right = (j<m-1) ? dp[i-1][j+1] : INT_MAX;
            int up = dp[i-1][j];
            dp[i][j] = fmin(up,fmin(left,right)) + matrix[i][j];
        }
    }
    int result=dp[n-1][0];
    for(int j=1;j<n;j++)
    {
        result=fmin(result,dp[n-1][j]);
    }
    return result;
    
}