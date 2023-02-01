//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        if(n==0 || n==1)
        return n;
        long long int a=0, b=1,c;
        for(int i=2;i<=n ;i++){
            c=(a+b)%1000000007;
            a=b%1000000007;
            b=c%1000000007;
            
        }
        return c%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends