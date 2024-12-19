class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int max_find = 0;
        int count = 0;
        for(auto i = 0; i!=arr.size();i++)
        {
            max_find = max(max_find , arr[i]);
            if(max_find == i)
            {
                count++;
            }
        }
        return count;
    }
};
