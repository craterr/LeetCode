int bs(int *nums,int low,int high,int target)
{
    if(low>high) return -1;
    int mid=(high+low)/2;
    
    if(nums[mid]==target)
        return mid;
    else if(nums[mid]< target)
        return bs(nums,mid+1,high,target);
    else
         return bs(nums,low,mid-1,target);
}

int search(int* nums, int numsSize, int target) 
{
//     int low=0;
//     int high=numsSize-1;
    
//     while(high<=low)
//     {
//         int mid=(high+low)/2;
        
//         if(nums[mid]==target)
//             return mid;
//         else if(nums[mid]target)
//             low=mid+1;
//         else
//             high=mid-1;
//     }
//     return -1;
    return bs(nums,0,numsSize-1,target);
}

