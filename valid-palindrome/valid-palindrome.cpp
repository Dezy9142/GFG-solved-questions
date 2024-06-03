class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        if(n==1) return true;
        int j=n-1;
        int i=0;
        
        while(i<=j){
          if(!isalnum(s[i])){
              i++;
            }
            else if(!isalnum(s[j])){
                j--;
            }
            else if(tolower(s[i])!=tolower(s[j])){
                 return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
        
        
    }
};