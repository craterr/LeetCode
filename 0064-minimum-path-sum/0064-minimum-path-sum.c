int minPathSum(int** grid, int gridSize, int* gridColSize) 
{
    int m = gridSize;
    int n = *gridColSize;
    int dp[m][n];
    
    dp[0][0] = grid[0][0];
    
    // Initialize the first column
    for(int i = 1; i < m; i++)
    {
        dp[i][0] = grid[i][0] + dp[i-1][0];
    }
    
    // Initialize the first row
    for(int j = 1; j < n; j++)
    {
        dp[0][j] = grid[0][j] + dp[0][j-1];
    }
    
    // Build dp array
    for(int i = 1; i < m; i++)
    {
        for(int j = 1; j < n; j++)
        {
            int top = grid[i][j] + dp[i][j-1];
            int left = grid[i][j] + dp[i-1][j];
            dp[i][j] = fmin(top, left);
        }
    }
    
    return dp[m-1][n-1];
}
