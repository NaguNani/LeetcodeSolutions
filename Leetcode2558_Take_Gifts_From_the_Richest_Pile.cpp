class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for(int first = 0 ;first<k;first++)
        {
            int maxi = 0 ;
            for(int current = 0;current<gifts.size();current++)
            {
                if(gifts[maxi]<gifts[current])
                {
                    maxi = current ;
                }
            }
            gifts[maxi] = sqrt(gifts[maxi]);
        }
        long long int result = accumulate(gifts.begin(),gifts.end(),0LL);
       return result;
    }
};
