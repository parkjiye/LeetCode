bool subset[20001];
int half;

bool canPartition(int* nums, int numsSize){
    half=0;
    memset(subset, 0, sizeof(subset));

    for(int i=0;i<numsSize;i++)
    {
        half+=nums[i];
    }
    
    if(half%2!=0) return false;
    
    half=half/2;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==half) return true;
    }
    
    for(int i=0;i<numsSize;i++)
    {
        if(subset[half]) return true;
        if(i==0)
        {
            subset[0]=true;
        }

        for(int j=half;j>=nums[i];j--)
        {
            if(subset[j-nums[i]]) subset[j]=true;
        }
    }

    if(subset[half]) return true;

    return false;
}