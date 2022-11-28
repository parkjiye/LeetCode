#define max(a, b) ((a)>(b)?(a):(b))
#define min(a, b) ((a)<(b)?(a):(b))
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){

    if(nums1Size>nums2Size)
    {
        int *temp1;
        temp1 = nums1;
        nums1 = nums2;
        nums2 = temp1;

        int temp2;
        temp2 = nums1Size;
        nums1Size = nums2Size;
        nums2Size = temp2;
    }

    int l=0, r=nums1Size;

    while(l<=r)
    {
        int i = l + (r-l)/2;
        int j = (nums1Size+nums2Size+1)/2 - i;

        if(j>nums2Size) // j가 배열을 벗어나는 경우 -> i가 너무 작으므로 l을 1 증가한다
        {
            l = i+1;
            continue;
        }
        if(i<nums1Size && nums1[i]<nums2[j-1]) //오른쪽 배열의 값이 왼쪽 배열에 있는 값보다 작은 경우
        {
            l = i+1;
            continue;
        }
        if(i>0 && nums1[i-1]>nums2[j])
        {
            r = i-1;
            continue;
        }

        int max_left=-1000001;
        if(i>0) max_left=max(max_left, nums1[i-1]);
        if(j>0) max_left=max(max_left, nums2[j-1]);

        if((nums1Size+nums2Size)%2) return max_left;

        int min_right=1000001;
        if(i<nums1Size) min_right = min(min_right, nums1[i]);
        if(j<nums2Size) min_right = min(min_right, nums2[j]);

        return ((double)max_left+min_right)/2;
    }

    return 0;

    
}