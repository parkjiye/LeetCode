class Solution {
public:
    bool detectCapitalUse(string word) {
        bool allcapital=false;
        bool notcapital=false;
        bool firstcapital=false;

        if(word[0]>=97 && word[0]<=122)
        {
            notcapital = true;
        }
        else
        {
            if(word[1]>=97 && word[1]<=122) firstcapital = true;
            else allcapital = true;
        }

        for(int i=1;i<word.length();i++)
        {
            if(notcapital && word[i]>=65 && word[i]<=90) return false;
            else
            {
                if(i==1) continue;
                else
                {
                    if(firstcapital && word[i]>=65 && word[i]<=90) return false;
                    else if(allcapital && word[i]>=97 && word[i]<=122) return false;
                }
            }
        }

        return true;
    }
};