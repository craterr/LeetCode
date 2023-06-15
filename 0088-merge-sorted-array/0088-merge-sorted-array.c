// void swap(int *min,int *j)
// {
//     int temp=*min;
//     *min=*j;
//     *j=temp;
// }


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
//     int j=nums2Size;
//     for (int i=nums1Size-1;i<=0;i--)
//     {
//         nums1[i]=nums1[j-1];
//         j--;
        
//     }
    
//     for (int i=0;i<nums1Size-2;i++)
//     {
//        int  min=i;
//         for (int j=i+1;i<nums1Size;j++)
//         {
//             if(nums1[j]<nums1[min])
//                 min=j;
            
//             swap(&nums1[min],&nums1[i]);
//         }
//     }
    
    int k=m+n-1;
    int i=m-1;
    int j=n-1;
    
    while (j>-1)
    {
        if(i>-1 && nums1[i]>=nums2[j])
        {
            nums1[k]=nums1[i];
            i--;k--;
        }
        else{
            nums1[k]=nums2[j];
            j--;k--;
        }
        
    }

}