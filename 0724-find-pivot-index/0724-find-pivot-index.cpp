class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sum = accumulate(nums.begin(), nums.end(), 0.0);

        for(int i=0;i<nums.size();i++)
        {
            int left, right;
            if(i==0)
            {
                left = 0;
                right = sum-nums[i];
            }
            else if(i==nums.size()-1)
            {
                left = sum-nums[i];
                right=0;
            }
            else
            {
                left = accumulate(nums.begin(), nums.begin()+i, 0.0);
                right = accumulate(nums.begin()+i+1, nums.end(), 0.0);
            }

            if(left==right) return i;
        }

        return -1;
        
    }
};