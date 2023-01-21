//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    
    public:
    //Function to find minimum number of pages.
    bool isPossible(int A[], int N, int M, int mid){
        int studentCount=1;
        int pagesum=0;
        for(int i=0;i<N;i++){
            if(A[i]>mid) return false;
             if(pagesum+A[i]>mid)
                {
                    studentCount++;
                   pagesum = A[i];
                   if(studentCount> M) return false;
                }
             else
                 pagesum+=A[i];
        }  
    return true;
             
}
int findPages(int A[], int N, int M) 
    {
        //code here
        int s=0;
        if(N<M) return -1;
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
        int e=sum;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(isPossible(A,N,M, mid)){
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

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends