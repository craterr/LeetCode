
int minCostClimbingStairs(int* cost, int costSize) {
    if (costSize <= 1) {
        return 0;  
    }
    
    int* dp = (int*)malloc(costSize * sizeof(int));
    dp[0] = cost[0];
    dp[1] = cost[1];

    
    for (int i = 2; i < costSize; i++) {
        dp[i] = cost[i] + fmin(dp[i - 1], dp[i - 2]);
    }

    // The minimum cost to reach the top is the minimum of the last two steps
    int result = fmin(dp[costSize - 1], dp[costSize - 2]);

    free(dp);

    return result;
}
