//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  bool isPossible(int arr[], int n, int k, long long int mid){
     long long int paintersCount=1;
      long long int  boardsum=0;
      for(int i=0;i<n;i++){
          if(arr[i]>mid) return false;
          if(boardsum+arr[i]>mid){
              paintersCount++;
              boardsum=arr[i];
              if(paintersCount > k) return false;
            }
          else{
              boardsum+=arr[i];
          }
      }
      return true;
  }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        // if(n<k) return -1;
        long long int s=0;
        long long int sum=0;
        for(int i=0;i<n ;i++){
            sum+=arr[i];
        }
        long long int ans=-1;
        long long int e=sum;
        long long int mid=s+(e-s)/2;
        while(s<=e){
            
            if(isPossible(arr, n,k, mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends