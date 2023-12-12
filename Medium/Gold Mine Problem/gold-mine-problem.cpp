//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[501][501];
    int solve(int i,int j,vector<vector<int>>&mat)
    {
        int n=mat.size();
        int m=mat[0].size();
        if(i<0 || i>=n || j>=m)
          return 0;
          
        if(dp[i][j]!=-1)
          return dp[i][j];
   
        return dp[i][j]=mat[i][j]+max({solve(i-1,j+1,mat),solve(i+1,j+1,mat),solve(i,j+1,mat)}); 
    
      
          
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int res=0;
        for(int i=0;i<n;i++)
        {
           res=max(solve(i,0,M),res);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends