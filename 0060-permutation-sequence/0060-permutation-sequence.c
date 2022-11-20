bool flag;
int count;
int array[10];
char answer[10];

int permutation(int n, int k, int start) {
    if(flag) return;
    if(start==n)
    {
        count+=1;
        if(k==count)
        {
            flag=true;
            return 1;
        }
        return 0;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(!array[i])
            {
                array[i]=1;

                answer[start]=i+'0';
                int ret = permutation(n, k, start+1);
                if(ret) return 1;
                array[i]=0;
            }            
        }
    }
    return 0;
}

char * getPermutation(int n, int k){
    memset(array, 0, sizeof(array));
    flag=false;
    count=0;

    memset(answer, '\0', (n + 1) * sizeof(char));

    permutation(n, k, 0);


    return answer;
}
