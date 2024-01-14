int minPathSum(int** grid, int gridSize, int* gridColSize) 
{
    int m=gridSize;
    int n=*gridColSize; // deferencing  the value pointed by gridColSize
    int dp[m][n];
    int top=0;
    int left=0;
    dp[0][0]=grid[0][0]; // initialising the dp matrix's first cell
    
    for(int i=1;i<m;i++)
    {
        dp[i][0]=grid[i][0]+dp[i-1][0]; // for the first row in dp matrix
    }
    
     for(int j=1;j<n;j++)
    {
        dp[0][j]=grid[0][j]+dp[0][j-1]; // for the first column in dp matrix
    }
    
    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            top=grid[i][j]+dp[i][j-1];
            left=grid[i][j]+dp[i-1][j];
            dp[i][j]=fmin(top,left); // finding the minimum path
            
            
        }
    }
    return dp[m-1][n-1];
    
}