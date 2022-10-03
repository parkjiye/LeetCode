

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    
    int check[1000];
    
    for(int i=0;i<1000;i++)
    {
        check[i]=0;
    }
    
    int count=0;
    if(nums1Size>nums2Size)
    {
        for(int i=0;i<nums1Size;i++)
        {
            for(int j=0;j<nums2Size;j++)
            {
                if(nums2[j]!=-1&&nums2[j]==nums1[i])
                {
                    check[count++]=nums1[i];
                    nums2[j]=-1;
                    break;
                }
            }
        }
    }
    else
    {
        for(int i=0;i<nums2Size;i++)
        {
            for(int j=0;j<nums1Size;j++)
            {
                if(nums1[j]!=-1&&nums1[j]==nums2[i])
                {
                    check[count++]=nums2[i];
                    nums1[j]=-1;
                    break;
                }
            }
        }
    }
    
    int* ans = (int*)malloc(sizeof(int)*(count));
    
    printf("%d\n", count);
    
    for(int i=0;i<count;i++)
    {
        printf("%d ", check[i]);
        ans[i]=check[i];
    }
    
    *returnSize=count;
    
    return ans;
}