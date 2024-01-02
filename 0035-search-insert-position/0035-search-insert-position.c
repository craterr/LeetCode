int searchInsert(int* nums, int numsSize, int target) 
{
    int low=0;
    int high=numsSize-1;
    int ans=numsSize;
    
    while(high>=low)
    {
        int mid=(low+high)/2;
        
        if(nums[mid]==target)
            return mid;
        
        else if(nums[mid]>=target)
            {
                ans=mid;
                high=mid-1;
            }
        else
            low=mid+1;
    }
    return ans;
    
}