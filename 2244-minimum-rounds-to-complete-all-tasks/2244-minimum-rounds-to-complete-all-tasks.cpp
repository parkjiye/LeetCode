class Solution {
public:
    int minimumRounds(vector<int>& tasks) {

        int ans=0;

        unordered_map<int,int> mp;

        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }

        for(auto freq : mp)
        {
            if(freq.second<2) return -1;

            if(freq.second>3)
            {
                if(freq.second%3==0) ans += freq.second/3;
                else ans+=freq.second/3 +1;
            }
            else ans+=1;

        }

        return ans;
    }
};