class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>v(26, 0);
        for(string s: words2){
            vector<int>temp(26, 0);
            for(auto it : s){
                temp[it-'a']++;
            }
            for(int i = 0; i < 26; i++){
                v[i] = max(v[i], temp[i]);
            }
        }
        vector<string>ans;
        for(auto s: words1){
            vector<int>v2(26, 0);
            for(auto it : s){
                v2[it-'a']++;
            }
            int flag = 1;
            for(int i= 0; i < 26; i++){
                if(v2[i] < v[i]){
                    flag = 0;
                    break;
                }
            }
            if(flag) ans.push_back(s);
        }
        return ans;
    }
};
