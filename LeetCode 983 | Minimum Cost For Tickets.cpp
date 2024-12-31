class Solution {
    unordered_map<int,int> mem;
    int solve(vector<int>& days,vector<int>& costs,int pos,int reachability){
        if(pos > days.size()-1) return 0;
        if(reachability >= days[pos]) return solve(days,costs,pos+1,reachability);
        if(mem.count(pos))  return mem[pos];
        
        int one = costs[0] + solve(days,costs,pos+1,days[pos]);
        int seven = costs[1] + solve(days,costs,pos+1,days[pos]+6);
        int month = costs[2] + solve(days,costs,pos+1,days[pos]+29);
        return mem[pos] = min({one,seven,month});
    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return min({costs[0] + solve(days,costs,0,days[0]),
                    costs[1] + solve(days,costs,0,days[0]+6),
                    costs[2] + solve(days,costs,0,days[0]+29)});
    }
};
