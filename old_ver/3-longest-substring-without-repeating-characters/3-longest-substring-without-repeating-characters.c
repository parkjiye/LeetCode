
int check[128];

int lengthOfLongestSubstring(char * s){
    
    int left = 0;
    int count = 0;
    int ans=0;
    
    for(int i=0;i<128;i++)
    {
        check[i]=0;
    }
    
    for(int i=0;i<strlen(s);i++)
    {
        if(check[s[i]]==0)
        {
            check[s[i]]=1;
            count++;
        }
        else
        {
            for(;left<i;left++)
            {
                if(s[left]==s[i])
                {
                    printf("%d", count);
                    left++;
                    break;
                }
                else
                {
                    count--;
                    check[s[left]]=0;
                }
            }
        }
        if(count>ans)
        {
            ans=count;
        }
            
    }
    
    return ans;
}