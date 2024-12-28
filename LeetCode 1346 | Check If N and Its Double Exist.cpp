class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int first = 0 ;first<arr.size();first++)
        {
            for(int second = 0 ; second <arr.size();second++)
            {
                if(arr[first] == 2* arr[second] && first!= second)
                {
                    return true;
                }
                
            }
        }
        return false;
    }
};
