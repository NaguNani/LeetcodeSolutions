class Solution {
public:
    long long findScore(vector<int>& nums) {
         long long ans = 0 ;
        int len = nums.size();
        vector<pair<int,int>> use(len);
        for(int i = 0 ; i< len ;i++)
        {
            use[i] = make_pair(nums[i],i);
        }
        sort(use.begin(),use.end());
        vector<bool>mark(len , false);
        for(int i = 0;i<len;i++)
        {
            int number = use[i].first;
            int index = use[i].second;
            if(mark[index]== false)
            {
                ans+= number;
                mark[index]= true;
                if(index-1>=0)
                {
                    mark[index-1] = true;
                }
                if(index+1<len)
                {
                    mark[index+1] = true;
                }
            }
        }
        
        return ans;
    }
};
