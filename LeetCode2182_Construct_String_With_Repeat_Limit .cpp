class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int>repeat(26,0);
        for(char ch : s)
        {
            repeat[ch-'a']++;
        }
        string result;
        int current_ind = 25;
        while(current_ind >= 0)
        {
            if(repeat[current_ind]==0)
            {
                current_ind--;
                continue;
            }
            int use = min(repeatLimit,repeat[current_ind]);
            result.append(use,'a'+current_ind);
            repeat[current_ind]-=use;
            if(repeat[current_ind]>0)
            {
                int small_ind = current_ind-1;
                while(small_ind >= 0&&repeat[small_ind]==0)
               {
                small_ind--;
                }
                if(small_ind <0)
                {
                    break;
                }
                result.push_back('a'+small_ind);
                repeat[small_ind]--;
            }
        }
        return result;
    }
};
