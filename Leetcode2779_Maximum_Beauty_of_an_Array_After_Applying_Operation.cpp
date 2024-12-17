class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int right = 0 ;
    int sol = 0;
    for( int left = 0 ;left<nums.size();left++)
    {
        while(right < nums.size() && nums[right]-nums[left] <= 2*k)
        {
            right++;
        }
        sol = max(sol,right-left);
    }
    return sol ;
    }
};
