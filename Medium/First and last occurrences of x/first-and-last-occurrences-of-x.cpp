//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n, int x) {
    int f = -1, l = -1;
    int s = 0, e = n - 1;

    // Finding the first occurrence
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == x) {
            f = mid;
            e = mid - 1;
        } else if (arr[mid] > x) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    // Resetting variables for the second loop
    s = 0;
    e = n - 1;

    // Finding the last occurrence
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == x) {
            l = mid;
            s = mid + 1;
        } else if (arr[mid] < x) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return {f, l};
}

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends