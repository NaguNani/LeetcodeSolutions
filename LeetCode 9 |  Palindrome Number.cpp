class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)  return false;

            int y = x;
            long long  reverse = 0;
            while(y!=0)
            {
                 int remainder = y%10;
                 reverse = reverse*10 +remainder ;
                 y=y/10;
            }
            

        
       return (reverse == x);
    }
};
