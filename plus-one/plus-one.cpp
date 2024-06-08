class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]=digits[i]+1;
                break;
            }else{
                digits[i]=0;
            }
        }
      // sara digits nine hi hoga last me ek carry bach gyi hogi=>create a new vector to store
        if(digits[0]==0){
            vector<int>ans(n+1,0);
            ans[0]=1;
            return ans;
            
        }
        return digits;
    }
};