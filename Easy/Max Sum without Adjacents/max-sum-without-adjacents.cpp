//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    if(n == 1) arr[0];
	    if(n == 2) return max(arr[0],arr[1]);
	    arr[2] += arr[0];
	    for(int i=3; i<n; i++) {
	        arr[i] += max(arr[i-2],arr[i-3]);
	    }
	   return max(arr[n-2],arr[n-1]);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends