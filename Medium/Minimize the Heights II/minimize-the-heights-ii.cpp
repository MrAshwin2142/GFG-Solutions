//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
     int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
        int res = arr[n-1] - arr[0];
        int i = lower_bound(arr, arr + n, k) - arr;
        for(int j = max(i, 1); j < n; j++) {
            int mini = min(arr[0] + k, arr[j] - k);
            int maxi = max(arr[n-1] - k, arr[j-1] + k);
            res = min(res, maxi - mini);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends