int min(int a ,int b)
{
    return a<b?a:b;
}



int minCostClimbingStairs(int* cost, int costSize) 
{
    
        int min(int a, int b)
        {
            return a < b ? a : b;
        }
    int n=costSize;
    n = n + 1; 
    int arr[n + 2]; 
    arr[2] = 0;  
    arr[1] = 0; 
    for (int i = 3; i <= n; i++) {
     
        arr[i] = min(cost[i - 3] + arr[i - 2], cost[i - 2] + arr[i - 1]);
    }

    return arr[n]; 


}