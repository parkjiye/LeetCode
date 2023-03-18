class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0)
            {
                answer.push_back(nums[i]+answer[i-1]);
            }
            else
            {
                answer.push_back(nums[i]);
            }
        }

        return answer;
    }
};