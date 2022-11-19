

int trailingZeroes(int n){
    int count=0;
    int number=0;
    for(int i=1;i<=n;i++){
        if(i%5==0){
            number=i;
            while(1){
                number=number/5;
                count++;
                if(number%5!=0){
                    break;
                }
            }
        }
    }
    return count;

}