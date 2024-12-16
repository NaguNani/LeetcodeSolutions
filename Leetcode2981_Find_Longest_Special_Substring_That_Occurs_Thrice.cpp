class Solution {
public:
    int maximumLength(string s) {
        map<string, int> occur ;
        for(int start = 0; start<s.length();start++)
        {
            string currentString ;
            for(int end = start ;end<s.length();end++)
            {
                if(currentString.empty() || currentString.back() == s[end])
                {
                currentString.push_back(s[end]);
                occur[currentString]++;
                }
                else{
                    break;
                }

            }
        }
        int ans =0;
        for(auto i:occur)
        {
            string str = i.first;
            if(i.second >= 3 && str.length()>ans) ans =str.length();
        }
        if(ans == 0) return -1;
        return ans ;
    }
};
