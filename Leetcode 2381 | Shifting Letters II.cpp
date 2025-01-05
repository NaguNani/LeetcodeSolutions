class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        vector<int> inital(n+1,0);
        for( auto shift : shifts)
        {
            if(shift[2] == 1)
            {
            inital[shift[0]]++;
            inital[shift[1]+1]--;
            }
            else
            {
                inital[shift[0]]--;
                inital[shift[1]+1]++;
            }
        }
        for(int i = 1;i<=n;i++)
        {
            inital[i]+=inital[i-1];
        }
        string ans ;
        for(int i =0;i<n;i++)
        {
            int count = inital[i] %26;
            if(count< 0)
            {
                count = 26+count;
            } 
            char c = char((s[i]-'a'+count)%26 +97);
            ans.push_back(c);
        }
        return ans;
        
    }
};
