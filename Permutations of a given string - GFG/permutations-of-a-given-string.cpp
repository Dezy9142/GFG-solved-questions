//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	  void solve(string S,int i, vector<string>& ans){
	       if(i==S.length()){
		        ans.push_back(S);
		        return;
		    }
		    for(int j=i;j<S.length();j++){
		       if(S[j] == S[j+1]);
		       else{
		        swap(S[i],S[j]);
		         solve(S,i+1,ans);
		        swap(S[i],S[j]);
		       }
		    }
	  }
	
		vector<string>find_permutation(string S)
		{
		      int i=0;
		      vector<string>ans;
		      solve(S,i,ans);
		      sort(ans.begin(),ans.end());
		      return ans;
		   
		    
		    
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends