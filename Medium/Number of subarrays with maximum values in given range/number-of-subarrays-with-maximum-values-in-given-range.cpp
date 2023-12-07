//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        queue<long long>q1;
        queue<long long>q2;
        long long s=0; 
        long long  c=0;
        long long int ans= 0;
        for(int i=0; i<n; i++){
            if(a[i]>=L and R>=a[i]){
                s++;
                q2.push(c);
                c=0;
            }
            else if(L>a[i]){
                s++;
                c++;
            }
            else if(a[i]>R){
                q1.push(s);
                q2.push(c);
                s=0;
                c=0;
            }
        }
        q1.push(s);
        q2.push(c);
        while(!q1.empty()){
            long long e= q1.front();
            ans+= e*(e+ 1)/2;
            q1.pop();
        }
        while(!q2.empty()){
            long long e= q2.front();
            ans-= e*(e+ 1)/2;
            q2.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends