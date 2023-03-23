//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
 bool isSafe(int i ,int j,int row ,int col,vector<vector<int>>&arr ,vector<vector<bool>> &visited ){
     if(((i>=0 && i<row)&&(j>=0 && j<col)) && (arr[i][j]==1) && (visited[i][j]==false)){
            return true;
        }
        else{
            return false;
        }
}
    
    
    void solveMaze(vector<vector<int>>&arr,int row,int col ,int i,int j,
     vector<vector<bool>> &visited ,vector<string>&path ,string output){
    if(row-1==i && col-1==j){
        path.push_back(output);
        return;
    }

    // Down -> i+1 ,j
    if(isSafe(i+1,j,row, col,arr,visited)){
       visited[i+1][j]=true;
       solveMaze(arr,row,col,i+1,j,visited,path,output+'D');
       visited[i+1][j]=false;
    }

    // left-> i,j-1
      if(isSafe(i,j-1,row, col,arr,visited)){
       visited[i][j-1]=true;
       solveMaze(arr,row,col,i,j-1,visited,path,output+'L');
       visited[i][j-1]=false;
    }
    // right-> i,j+1
      if(isSafe(i,j+1,row, col,arr,visited)){
       visited[i][j+1]=true;
       solveMaze(arr,row,col,i,j+1,visited,path,output+'R');
       visited[i][j+1]=false;
    }

    // up -> i-1, j
      if(isSafe(i-1,j,row, col,arr,visited)){
       visited[i-1][j]=true;
       solveMaze(arr,row,col,i-1,j,visited,path,output+'U');
       visited[i-1][j]=false;
    }
 }
 
    vector<string> findPath(vector<vector<int>> &m, int n) {
  
        vector<string>path;
                 if(m[0][0]==0){
                  return path;
                 }
        int i=0;
        int j=0;
        int row=n;
        int col=n;
        string output="";
        vector<vector<bool>>visited(row,vector<bool>(col,false));
        visited[0][0]=true;
         solveMaze(m,row,col,0,0,visited,path,output);
         return path;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends