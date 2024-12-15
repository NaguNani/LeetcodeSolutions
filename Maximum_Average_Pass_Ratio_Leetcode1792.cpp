class Solution {
    #define pdi pair<double,int>
    void heappush(priority_queue<pdi>& maxheap ,vector<vector<int>>&  classes,int  ind)
    {
        double current = (double)classes[ind][0]/classes[ind][1];
        double new_avg =((double)classes[ind][0]+1)/(classes[ind][1]+1);
        double incre = new_avg - current;
        maxheap.push(make_pair(incre,ind));
    }
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n =  classes.size();
        priority_queue<pdi> maxheap;
        for(int i = 0;i<n;i++)
            heappush(maxheap,classes,i);
        while(extraStudents--)
        {
            pdi curr = maxheap.top();
            maxheap.pop();
            int ind =curr.second;
            classes[ind][0]++;
            classes[ind][1]++;
            heappush(maxheap,classes,ind);
        }
        double final_avg =0.0;
        int total= 0;
        for(int i =0;i<n;i++)
        {
            final_avg += (double)classes[i][0]/classes[i][1];
        }
       return final_avg/n; 
    }
};
