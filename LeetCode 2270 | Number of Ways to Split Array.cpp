class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long left_sum = 0,right_sum = 0;
        for(int num : nums)
        {
            right_sum +=num;
        }
        int counter = 0;
        for(int i = 0 ;i<nums.size()-1;i++)
        {
            left_sum += nums[i];
            right_sum -= nums[i];
            if(left_sum >= right_sum)
            {
                counter++;
            }
        }
        return counter;
    }
};
