//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
        // code here
        ll mod=1e9+7;
        vector<int> prev(2,1);
        for(int ind=1;ind<=n;ind++){
            vector<int> curr(2,0);
            for(int k=0;k<=1;k++){
                if(k==0)curr[k]=(prev[0]%mod+prev[1]%mod)%mod;
                else
                curr[k]=prev[0]%mod;
            }
            prev=curr;
        }
        return prev[0];
    }


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends