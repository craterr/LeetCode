#include <limits.h>

int minimumTotal(int** triangle, int triangleSize, int* triangleColSize) {
    int n = triangleSize;
    
    int dp[n];
    
    for (int i = 0; i < n; i++) {
        dp[i] = triangle[n-1][i];
    }

    //Initialising the second-to-last row and work upwards
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            dp[j] = fmin(dp[j], dp[j + 1]) + triangle[i][j];
        }
    }

    return dp[0];
}