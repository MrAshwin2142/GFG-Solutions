//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	void shuffleArray(int arr[],int n)
	{
	    vector<int>v;
	    int mid = n/2; 
	    for(int i=0;i<n/2;i++){
	        v.push_back(arr[i]);
	        v.push_back(arr[mid++]);
	    }
	   for(int i = 0; i < n; i++)
	        arr[i]=v[i];	        
	}
};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends