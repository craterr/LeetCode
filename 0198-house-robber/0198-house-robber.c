int rob(int* nums, int numsSize) 
{
    if(numsSize < 1) return 0;
    
    int prev2=0;
    int prev=0;
    int cur;

    for(int i = 0; i < numsSize; i++)
    {
        cur= fmax(nums[i] + prev2, prev);
        prev2=prev;
        prev=cur;
    }

    int result = prev;
    return result;
}












































// int rob(int* nums, int numsSize) 
// {
//     int n=numsSize;
//     if (n == 0) {
//         return 0;
//     }
    
//     int rob1 = 0, rob2 = 0;

//     for (int i = 0; i < n; i++) {
       
//         int temp= fmax(rob1 + nums[i], rob2);
//         rob1=rob2;
//         rob2=temp;
//     }

//     return rob2;
//}