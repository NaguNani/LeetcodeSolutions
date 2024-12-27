class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int left = values[0];
        int max_score = 0;
        for(int i =1;i<values.size();i++)
        {
             int right = values[i] - i ;
            max_score = max(max_score , left+right);
            left = max(left,values[i]+i);
        }
        return max_score;
    }
};
