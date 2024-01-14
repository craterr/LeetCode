int minFallingPathSum(int** matrix, int matrixSize, int* matrixColSize) 
{

    int n =matrixSize;
    int m=*matrixColSize;
    
    int dp[n][m];
    
    // Initialise the first row
    for (int i = 0; i < m; i++) {
        dp[0][i] = matrix[0][i];
    }

    //Starting with the second matrix
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int left = (j>0) ? dp[i-1][j-1] : INT_MAX; // for left --- current matrix to upper left matrix
            int right = (j<m-1) ? dp[i-1][j+1] : INT_MAX;  // for right --- current matrix to upper right matrix
            int up = dp[i-1][j]; // for above --- current matrix to above matrix cell
            dp[i][j] = fmin(up,fmin(left,right)) + matrix[i][j]; //adding the minimum with the current matrix
        }
    }
    
    //To get the minimum we have to initialise the last row first cell value and compare with the values in  that    row to get the final path stored in dp array.
    
    int result=dp[n-1][0];
    for(int j=1;j<n;j++)
    {
        result=fmin(result,dp[n-1][j]);
    }
    return result;
    
}