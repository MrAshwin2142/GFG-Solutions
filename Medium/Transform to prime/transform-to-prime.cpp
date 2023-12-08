//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
     bool isPrime(int x){
        if(x<2)return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0)return false;
        }
        return true;
    }
    public:
    int minNumber(int arr[],int N)
    {
        int sum=0;
        for(int i=0;i<N;i++)sum+=arr[i];
        //prime number just greater than sum
        for(int cand=sum;cand<sum+100;cand++){
            if(isPrime(cand)){
                return cand-sum;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends