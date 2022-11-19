

int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize){
    /*int* gas2=(int*)malloc(sizeof(int)*gasSize*2);
    int* cost2=(int*)malloc(sizeof(int)*costSize*2);
    int count=0;
    int total=0;
    
    for(int i=0;i<gasSize;i++)
    {
        gas2[i]=gas[i];
        cost2[i]=cost[i];
    }
    
    for(int i=gasSize;i<gasSize*2;i++)
    {
        gas2[i]=gas[i-gasSize];
        cost2[i]=cost[i-gasSize];
    }
    
    for(int i=0;i<gasSize;i++)
    {
        if(gas2[i]<cost2[i])
        {
            continue;
        }
        else
        {
            total=gas2[i];
            for(int j=i;j<i+gasSize;j++)
            {
                total=total-cost2[j]+gas2[j+1];
                if(total>=cost2[j+1])
                {
                    count++;
                    if(count==gasSize)
                    {
                        return i;
                    }
                    continue;
                }
                else
                {
                    count=0;
                    total=0;
                    break;    
                }
            }
        }
    }
    
    return -1;
    */
    
    
    int sum=0;
    int total=0;
    int ans=0;
    
    for(int i=0;i<gasSize;i++)
    {
        total+=gas[i]-cost[i];
        sum+=gas[i]-cost[i];
        
        if(total<0)
        {
            ans=i+1;
            total=0;
        }
        
    }
    
    if(sum<0) return -1;
    else return ans;
}