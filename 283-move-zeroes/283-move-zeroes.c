

void moveZeroes(int* nums, int numsSize){
    
    int cnt=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0)
        {
            cnt+=1;
        }
    }
    
    int* nonzeroes = malloc(sizeof(int)*cnt);
    int a=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nonzeroes[a]=nums[i];
            a+=1;
        }
    }
    
    
    
    for(int i=0;i<numsSize;i++){
        if(i<cnt){
            nums[i]=nonzeroes[i];
        }
        else{
            nums[i]=0;
        }
    }
    
    /*int count=0;
    int size = numsSize;
    int sub=1;*/
    
    /*for(int i=0;i<size-sub;i++)
    {
        for(int m=0;m<size;m++){
            printf("%d ", nums[m]);
        }
        printf("\n");
        printf("%d %d\n", i, size-sub);
        if(nums[i]==0 && nums[size-sub]!=0)
        {
            int temp = nums[i];
            nums[i] = nums[size-sub];
            nums[size-sub] = temp;
            sub+=1;
            continue;
        }
        if(nums[i]==0 && nums[size-sub]==0)
        {
            sub+=1;
            i-=1;
            continue;
        }
        else{
            continue;
        }
    }*/
    
    
    
}