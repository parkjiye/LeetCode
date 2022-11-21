/*int hIndex(int* citations, int citationsSize){

    for(int i=0;i<citationsSize;i++)
    {
        if(citations[i]>=citationsSize-i) return citationsSize-i;
    }

    return 0;
}*/

int binary_search(int* citations, int l, int r, int n) {
    int answer = 0;

    while(l<=r) {
        int mid = l+(r-l)/2;

        if(citations[mid]>=n-mid) {
            answer = n-mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    return answer;
}
int hIndex(int* citations, int citationsSize){
    return binary_search(citations, 0, citationsSize-1, citationsSize);
}