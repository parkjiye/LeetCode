int arr[10001];

int numSquares(int n){
    
    int mul=2;

    for(int i=1;i<=n;i++)
    {
        if(i==1 || i==2 || i==3)
        {
            arr[i] = i;
            continue;
        }

        if(i>=(mul+1)*(mul+1)) mul+=1;
        if(i==mul*mul) {
            arr[i] = 1;
            continue;
        }
        int min=100000000;
        for(int j=1;j<=mul;j++)
        {
            if(arr[i-(j*j)]<min) min=arr[i-(j*j)];
        }
        arr[i]=min+1;
    }

    return arr[n];
}