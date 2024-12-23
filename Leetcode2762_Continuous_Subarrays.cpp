class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long count = 0 ;
        int len = nums.size();
        int left = 0;
        int right;
        int range_min = INT_MAX;
        int range_max= INT_MIN;
        long long  window = 0;
        for(right = 0;right< len;right++)
        {
            
            range_min = min(range_min,nums[right]);
            range_max = max(range_max,nums[right]);
            
            if(range_max - range_min >2)
            {
                window= right-left;
                count = count+(window*(window+1))/2;
                left = right;
                range_min = nums[right];
                range_max =nums[right];
                while(abs(nums[right]-nums[left-1])<=2)
                {
                    left--;
                    range_min = min(range_min ,nums[left]);
                    range_max = max(range_max,nums[left]);
                }
                if(left<right)
                {
                    window = right-left;
                    count-=(window*(window+1))/2;
                }
            }
        }
        window= right-left;
        count = count+(window*(window+1))/2;
        return count;
    }
};
