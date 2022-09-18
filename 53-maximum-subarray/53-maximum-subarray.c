

int maxSubArray(int* nums, int numsSize){
    int sum=0;
    int max=-10000;
    
    for(int i=0;i<numsSize;i++)
    {
        /*for(int j=i;j<numsSize;j++)
        {

            sum+=nums[j];
            if(sum>max) max=sum;
            
        }
        sum=0;*/
        
        if(sum<0) sum = nums[i];
        else sum += nums[i];
        
        if(sum>max) max = sum;
    }
    
    return max;

}