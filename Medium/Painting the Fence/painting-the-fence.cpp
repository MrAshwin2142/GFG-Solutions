//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long countWays(int n, int k){
  if (n == 1) return k;
        if (n == 2) return k + k * (k - 1) % 1000000007;

        long long mod = 1000000007;
        long long same = k;
        long long diff = (k%mod * (k - 1) % mod)%mod;
        long long total = (same %mod+ diff%mod) % mod;

        for (long long i = 3; i <= n; i++) {
            same = diff % mod;
            diff = (total % mod * (k - 1) % mod) % mod;
            total = (same%mod + diff%mod) % mod;
        }

        return total ;    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends