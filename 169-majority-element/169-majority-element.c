

int majorityElement(int* nums, int numsSize){

    /*int maj = floor(numsSize/2);
    int count=1;
    int answer=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j])
            {
                count+=1;
            }
        }
        
        if(count>maj){
            answer=nums[i];
            break;
        }
        else{
            count=1;
        }
    }
    
    return answer;*/
    
    int count=0;
    int candidate=0;
    
    for(int i=0;i<numsSize;i++)
    {
        if(count==0) candidate=nums[i];
        
        if(nums[i]!=candidate) count--;
        
        else count++;
        
    }
    
    return candidate;
}