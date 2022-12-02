int temp[100001];

void merge(int* arr, int left, int mid, int right)
{
    int pa, pb, p;

    for(pa=left, pb=mid+1, p=left; pa<=mid && pb<=right; p++)
    {
        if(arr[pa]<=arr[pb]) temp[p] = arr[pa++];
        else temp[p]=arr[pb++];
    }

    while(pa<=mid) temp[p++]=arr[pa++];
    while(pb<=right) temp[p++]=arr[pb++];

    for(p=left;p<=right;p++) arr[p]=temp[p];
}

void merge_sort(int* arr, int left, int right)
{
    if(left<right)
    {
        int mid=left+(right-left)/2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int minMoves2(int* nums, int numsSize){
    merge_sort(nums, 0, numsSize-1);

    int mid = numsSize/2;
    int answer=0;
    
    for(int i=0;i<numsSize;i++)
    {
        if(i<mid) answer+=(nums[mid]-nums[i]);
        else if(i>mid) answer+=(nums[i]-nums[mid]);
    }

    return answer;
}