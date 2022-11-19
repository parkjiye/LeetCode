int subset[13];
int sum;

void combination(int* nums, int n, int r, int count) {
    if(r==0)
    {
        int xor=subset[0];
        for(int i=1;i<count;i++)
        {
            xor ^= subset[i];
        }
        sum+=xor;
    }
    else if (n<r) return;
    else
    {
        subset[r-1]=nums[n-1];
        combination(nums, n-1, r-1, count);
        combination(nums, n-1, r, count);
    }
}


int subsetXORSum(int* nums, int numsSize){
    sum = 0;

    for(int i=0;i<numsSize;i++)
    {
        sum+=nums[i];
    }

    for(int i=2;i<=numsSize;i++)
    {
        memset(subset, 0, sizeof(subset));
        combination(nums, numsSize, i, i);
    }

    return sum;
}


/*int sum=0;
int A[13];
int B[13];

void combination(int N, int R, int count) {
    if(R==0)
    {
        int xor = A[0];
        for(int i=1;i<count;i++)
        {
            xor = xor ^ A[i];
            printf("%d ", sum);
        }
        printf("%d ", xor);
        sum+=xor;
        printf("%d\n", sum);
        return;
    }
    if(N<R) return;
    else
    {
        A[R-1] = B[N-1];
        combination(N-1, R-1, count);
        combination(N-1, R, count);
    }
}


int subsetXORSum(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++)
    {
        B[i]=nums[i];
    }
    sum=0;
    for(int i=2;i<=numsSize;i++)
    {
        combination(numsSize, i, i);
    }
    for(int i=0;i<numsSize;i++)
    {
        sum+=nums[i];
    }

    return sum;
}*/

