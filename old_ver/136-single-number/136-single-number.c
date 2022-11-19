

int singleNumber(int* nums, int numsSize){
    /*int num = 3*10000;
    int* arrays=malloc(sizeof(int)*num*2);
    
    for(int i=0;i<num;i++){
        arrays[i]=0;
    }
    for(int i=0;i<numsSize;i++){
        if(arrays[nums[i]+num]==0){
            arrays[nums[i]+num]=60001;
            continue;
        }
        if(arrays[nums[i]+num]==60001){
            arrays[nums[i]+num]=nums[i];
            continue;
        }
    }
    int answ=0;
    for(int i=0;i<num*2;i++){
        if(arrays[i]==60001){
            answ=i-30000;
        }
    }
    
    return answ;*/
    
    
    for(int i=1;i<numsSize;i++)
    {
        nums[0]^=nums[i];
    }
    return nums[0];
}