

int romanToInt(char * s){
    int length = strlen(s);
    int count=0;
    for(int i=0;i<length;i++){
        if(s[i]=='I')//1
        {
            if(s[i+1]=='V' || s[i+1]=='X')
            {
                count--;
            }
            else
            {
                count++;
            }
        }
        else if(s[i]=='V')//5
        {
            count+=5;
        }
        else if(s[i]=='X')//10
        {
            if(s[i+1]=='L' || s[i+1]=='C')
            {
                count-=10;
            }
            else
            {
                count+=10;
            }
        }
        else if(s[i]=='L')//50
        {
            count+=50;
        }
        else if(s[i]=='C')//100
        {
            if(s[i+1]=='D' || s[i+1]=='M')
            {
                count-=100;
            }
            else
            {
                count+=100;
            }
        }
        else if(s[i]=='D')//500
        {
            count+=500;
        }
        else//1000
        {
            count+=1000;
        }
    }
    
    return count;
}