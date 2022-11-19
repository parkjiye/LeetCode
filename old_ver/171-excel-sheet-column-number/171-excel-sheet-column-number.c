

int titleToNumber(char * columnTitle){
    int count=0;
    int length = strlen(columnTitle);
    for(int i=length-1;i>=0;i--)
    {
        count+=(columnTitle[i]-64) * pow(26, (length - (i+1)));
    }
    //printf("%d", columnTitle[0]-64);
    
    return count;
}