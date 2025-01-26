class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count =0;
        int leftSum =0;
        int maxSum = accumulate(nums.begin(), nums.end(), 0);
        int rightSum;
        for(int i = 1;i<=nums.size()-1;i++)
        {
            rightSum = 0;
            leftSum = leftSum+nums[i-1];
            rightSum = maxSum-leftSum;
            if((leftSum-rightSum) % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};
