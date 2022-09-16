

void moveZeroes(int* nums, int numsSize){
    
    /*int cnt=0;
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
    }*/
    
    
    int p=0;
    
    for(int i=0;i<numsSize;i++){
        if(nums[i])
        {
            nums[p]=nums[i];
            p+=1;
        }
    }
    
    for(;p<numsSize;p++){
        nums[p]=0;
    }
    
}