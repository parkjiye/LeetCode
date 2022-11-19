int recursion(int n, int k){
    if(n==1) return 0;
    return (k+recursion(n-1, k))%n;
}

int findTheWinner(int n, int k){
    return recursion(n, k)+1;
}