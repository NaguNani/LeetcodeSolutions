class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int count  = 0;
        string ans = "";
        for(int i = 0;i <s.length();i++)
        {
            if( count< spaces.size() && i ==spaces[count])
            {
                ans+= ' ';
                count++;
            }
            ans+=s[i];
        }
        return ans;
    }
};
