#include <stdio.h>

long long uniquePaths(int m, int n) {
    if (m <= 0 || n <= 0) return 0;

    long long dp[m][n];

    // Initialize the first row and first column to 1
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 1;
            }
        }
    }

    // Fill the dp array using dynamic programming
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    return dp[m - 1][n - 1];
}

