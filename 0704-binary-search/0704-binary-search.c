int bs(int *nums,int low,int high,int target)
{
    if(high<low)
        return -1;
    
    int mid=(low+high)/2;
    
    if(nums[mid]==target)
        return mid;
    else if(nums[mid]<target)
        return bs(nums,mid+1,high,target);
    else
        return bs(nums,low,mid-1,target);
        
}


int search(int* nums, int numsSize, int target) {
    return bs(nums,0,numsSize-1,target);
    
}