class Solution {
public:
    vector<string> split(string str, char Delimiter) {
        istringstream iss(str);             // istringstream에 str을 담는다.
        string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
        vector<string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
        while (getline(iss, buffer, Delimiter)) {
            result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
        }
 
        return result;
    }

    bool wordPattern(string pattern, string s) {
        vector<string> sentence = split(s, ' ');
        string arr[30];

        if(pattern.length() != sentence.size()) return false;
        
        for(int i=0;i<pattern.length();i++)
        {
            if(arr[pattern[i]-96]=="") arr[pattern[i]-96]=sentence[i];
            else
            {
                if(arr[pattern[i]-96]==sentence[i]) continue;
                else return false;
            }
        }

        for(int i=0;i<26;i++)
        {
            if(arr[i]!="" && count(begin(arr), end(arr), arr[i])>1)
            {
                return false;
            }
        }

        return true;
    }
};