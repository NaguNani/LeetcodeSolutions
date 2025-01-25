class Solution {
    public boolean isPalindrome(String s) {
    
        if(s.length() == 0) return true ;
        else
        {
             s = s.toLowerCase();
             s = s.replaceAll("[^a-zA-Z0-9]" ,"");
            String rev = new StringBuilder(s).reverse().toString();
            
            if(rev.equals(s))
            {
                return true;
            } 
        }
        return false;
    }
}
