int min(int a ,int b)
{
    return a<b?a:b;
}



int minCostClimbingStairs(int* cost, int costSize) 
{
//     {
        int n=costSize;
//         if(n==2)
//             return min(cost[0],cost[1]);
        
//         for(int i=2;i<=n;i++)
//         {
//             cost[i]=cost[i]+min(cost[i-1],cost[i-2]);
//         }
        
//         return min(cost[n-1],cost[n-2]);
        
        
//     }
    
// Function to find the minimum of two integers
int min(int a, int b) {
    return a < b ? a : b;
}

// Function to find the minimum cost to climb stairs

    n = n + 1;  // Increment the number of steps by 1 to account for reaching the top

    int arr[n + 2];  // Create an array `arr` to store the minimum cost to reach each step, including two extra steps at the beginning
    arr[2] = 0;  // Initialize the cost to reach the 2nd step as 0
    arr[1] = 0;  // Initialize the cost to reach the 1st step as 0

    for (int i = 3; i <= n; i++) {
        // Calculate the minimum cost to reach the current step (i)
        // The minimum cost can be either by taking a single step from the previous step (i - 1) or by taking two steps from the step before that (i - 2)
        // The cost is determined by the `cost` array, which stores the cost for each step
        arr[i] = min(cost[i - 3] + arr[i - 2], cost[i - 2] + arr[i - 1]);
    }

    return arr[n];  // Return the minimum cost to reach the top step (n)


}