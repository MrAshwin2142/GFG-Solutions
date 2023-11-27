//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to detect cycle using DSU in an undirected graph.
	vector<int> par;
    
    int find(int n){
        if(par[n]==n) return n;
        return par[n]=find(par[n]);
    }
    
    bool Union(int a, int b){
        int x=find(a);
        int y=find(b);
        if(x!=y){
            par[x]=y;
            return false;
        }
        return true;
    }
    
	int detectCycle(int V, vector<int>adj[])
	{
	    par.resize(V);
	    iota(par.begin(),par.end(),0);
	    
	    for(int i=0;i<V;i++){
    	    for(int j=0;j<adj[i].size();j++){
    	        //i<adj[i][j] to handle case for 1->2 and 2->1 not considre as cycle
    	        if(i<adj[i][j] && Union(i,adj[i][j])){
    	            return 1;
    	        }
    	    }
	    }
	    return 0;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends