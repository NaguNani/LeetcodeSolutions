class Solution {
public:
    bool isValid(string s) {
        stack<int> answer ;
        for(int  i = 0 ;i<s.length();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                answer.push(s[i]);
            }
            else
            {
                if(answer.empty()) return false;
                    char c = answer.top();
                    if((c == '(' && s[i] == ')') || (c == '[' && s[i] == ']') || (c == '{' && s[i] == '}')  )
                    {
                        answer.pop();
                    } 
                    else
                    {
                        return false;
                    }
                
            }
        }
        return answer.empty();
        
    }
};
