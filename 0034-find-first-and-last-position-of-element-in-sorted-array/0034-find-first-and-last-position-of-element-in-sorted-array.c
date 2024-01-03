/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* searchRange(int* nums, int numsSize, int target, int* returnSize) 
{
    int low = 0;
    int high = numsSize - 1;
    int *result = (int*)malloc(2 * sizeof(int));
    *returnSize = 0;

    while (high >= low)
    {
        int mid = (high + low) / 2;

        if (nums[mid] == target)
        {
            int start = mid;
            while (start >= 0 && nums[start] == target)
                start--;

            int end = mid;
            while (end < numsSize && nums[end] == target)
                end++;

            result[0] = start + 1;
            result[1] = end - 1;
            *returnSize = 2;
            return result;
        } 
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    result[0] = -1;
    result[1] = -1;
    *returnSize = 2;
    return result;
}
