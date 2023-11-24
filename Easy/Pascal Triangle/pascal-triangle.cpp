//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
         vector<vector<long long>>ans;
         for(int i=0;i<n;i++){
             vector<long long>temp(i+1,1);
             if(i>=2){
            for(int j=1;j<temp.size()-1;j++){
                temp[j]=(ans[i-1][j]+ans[i-1][j-1])%1000000007;
                }
             }
            ans.push_back(temp);
         }
         return ans[n-1];
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends