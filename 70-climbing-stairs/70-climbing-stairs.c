
int climb(int n, int* stairs){
    if(n<2){
        return 1;
    }
    if(stairs[n-1]==0){
        stairs[n-1]=climb(n-1, stairs);
    }
    if(stairs[n-2]==0){
        stairs[n-2]=climb(n-2, stairs);
    }
    return stairs[n-1]+stairs[n-2];
    
}
int climbStairs(int n){
    int* stairs = (int*)malloc(sizeof(int)*n);
    
    for(int i=0;i<n;i++){
        stairs[i]=0;
    }
    
    return climb(n, stairs);

}