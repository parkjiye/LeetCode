int arr[2501];

int lengthOfLIS(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++)
    {
        if(i==0)
        {
            arr[i]=1;
            continue;
        }
        int max=0;
        for(int j=0;j<i;j++)
        {
            if(nums[j]>=nums[i]) continue;
            else
            {
                if(arr[j]>max) max=arr[j];
            }
        }
        arr[i]=max+1;
    }

    int max=0;
    for(int i=0;i<numsSize;i++)
    {
        if(arr[i]>max) max=arr[i];
    }

    return max;
}