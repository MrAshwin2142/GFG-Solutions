//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
         vector<int>res;
        int n=matrix.size();
        // this loop traverse the top left matrix 
        for(int i=0;i<n;i++){
            int row=0, col=i;
            while(col>=0){
                res.push_back(matrix[row][col]);
                col--;
                row++;
            }
        }
        // this loop traverse the bottom right matrix 
        for(int i=1;i<n;i++){
            int row=i, col=n-1;
            while(row<n){
                res.push_back(matrix[row][col]);
                row++;
                col--;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends