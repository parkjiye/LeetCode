class Solution {
public:
    bool isDivided(int a, int num){
        if(num%a==0){
            return true;
        }
        else{
            return false;
        }
    }
    bool isUgly(int n) {
        if(n<=-1) return false;
        if(n==1) return true;
        else {
            if(n==2 || n==3 ||n==5) return true;
            else{
                int num = sqrt(n);
                printf("%d", num);
                for(int i=2;i<=num;i++){
                    while(1){
                        bool result = isDivided(i, n);
                        if(result==true){
                            if(i!=2 && i!=3 && i!=5){
                                return false;
                            }
                            n=n/i;
                            if(n==2 || n==3 ||n==5){
                                return true;
                            }
                            continue;
                        }
                        else{
                            break;
                        }
                    }
                }
            }
            return false;
        }
    }
};