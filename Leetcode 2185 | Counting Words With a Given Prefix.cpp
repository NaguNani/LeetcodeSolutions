class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int len = pref.length();
        for(int i = 0;i<words.size();i++)
        {
           if(words[i].size()>= len)
           {
            bool complete = true;
            for(int j = 0;j<len;j++)
            {
               if(words[i][j] != pref[j])
               {
                complete = false;
                break;
               } 
            }
            if(complete == true) count++;
           } 
        }
        return count;
        
    }
};
