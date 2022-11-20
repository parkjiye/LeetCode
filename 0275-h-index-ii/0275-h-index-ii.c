int hIndex(int* citations, int citationsSize){

    for(int i=0;i<citationsSize;i++)
    {
        if(citations[i]>=citationsSize-i) return citationsSize-i;
    }

    return 0;
}